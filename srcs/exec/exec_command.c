/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:14:31 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:14:35 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static char	**env_to_array(t_env *lst);
static char	*get_path(t_shell *data);

static void	exec_builtin(char **args, t_shell *data, t_builtin builtin)
{
	call_builtin(args, data, builtin);
	free_shell(data);
	clear_env(&data->lst_env);
	rl_clear_history();
	exit(EXIT_SUCCESS);
}

/*
 * Fn		: exec_command(char *comm, char **args, t_shell *data)
 * Scope	: executes commands, either builtin or through execve
 * Input	: char * - command name
 *			: char ** - command arguments
 *			: t_shell * - pointer to global struct
 * Output	: int - same as commands
 * Errors	: same as commands
 * Uses		: exec_sentence [executor.c]
 */
void	exec_command(char *comm, char **args, t_shell *data)
{
	t_builtin	builtin;
	char		*path;
	char		**envs;

	builtin = isbuiltin(comm);
	if (builtin)
	{
		exec_builtin(args, data, builtin);
	}
	else
	{
		envs = env_to_array(data->lst_env);
		path = get_path(data);
		if (call_execve(args, path, envs) == -1)
		{
			if (envs)
				free_array(envs);
			free_shell(data);
			clear_env(&data->lst_env);
			rl_clear_history();
			exit(g_global);
		}
	}
}

static char	**env_to_array(t_env *lst)
{
	t_env	*tmp;
	char	*env_str;
	char	**env_array;

	env_str = NULL;
	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		env_str = ft_strjoin_free(env_str, tmp->key);
		env_str = ft_strjoin_free(env_str, "=");
		env_str = ft_strjoin_free(env_str, tmp->value);
		env_str = ft_strjoin_free(env_str, "\n");
		tmp = tmp->next;
	}
	env_array = ft_split(env_str, '\n');
	free(env_str);
	return (env_array);
}

static char	*get_path(t_shell *data)
{
	t_env	*path;
	char	*p;

	path = compare_key(data->lst_env, "PATH");
	if (!path)
		p = NULL;
	else
		p = path->value;
	return (p);
}
