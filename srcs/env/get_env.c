/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:05:55 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:05:57 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static t_env	*get_pwd(t_env *env);

/*
 * Input		:char *environ[] - environment variable
 * Scope		:makes a copy of the env
 *				:remembering that environment variables have key=value format
 * Output		:a node with the data from env
 */
t_env	*get_env(char *environ[])
{
	int		index;
	char	*key;
	char	*value;
	t_env	*env;

	index = 0;
	env = NULL;
	if (!*environ)
	{
		env = get_pwd(env);
	}
	while (environ[index])
	{
		key = NULL;
		value = NULL;
		get_entry(&key, &value, environ[index], ft_strlen(environ[index]));
		env = addfront_env(env, key, value);
		free(key);
		free(value);
		index++;
	}
	return (env);
}

static t_env	*get_pwd(t_env *env)
{
	char	*path;

	path = getcwd(NULL, 0);
	env = addfront_env(env, "PWD", path);
	free(path);
	return (env);
}
