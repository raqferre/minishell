/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:26:11 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:26:18 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	g_global = 0;

static int	check_argc(int argc)
{
	if (argc != 1)
	{
		ft_putendl_fd("\e[31m---Too many arguments---\e[0m", 2);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[], char *envp[])
{
	t_shell	data;

	if (!check_argc(argc))
		return (0);
	(void) argv;
	init_shell(&data);
	data.lst_env = NULL;
	data.lst_env = get_env(envp);
	while (1)
	{
		setup_signals();
		data.line = readline_gets(data.line);
		if (!data.line)
			break ;
		check_buf(&data.line);
		if (data.line && *data.line && !only_spaces(data.line))
			add_history(data.line);
		launch_prog(&data);
		free_shell(&data);
	}
	free_shell(&data);
	clear_env(&data.lst_env);
	rl_clear_history();
	return (0);
}
