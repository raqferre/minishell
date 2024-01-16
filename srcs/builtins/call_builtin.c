/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:54:23 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:54:26 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: call_builtin(char **args, t_shell *data, t_builtin builtin)
 * Scope	: set arguments and call builtin
 * Input	: char ** - command arguments
 *			: t_shell * - pointer to global struct
 *			: t_builtin - builtin to call
 * Output	: int - same return as builtin
 * Errors	: same as builtin
 * Uses		: exec_command(); exec_one [executor.c];
 */
int	call_builtin(char **args, t_shell *data, t_builtin builtin)
{
	const int	size = args_size(args);

	if (builtin == ECHO)
		return (echo(args, 1));
	if (builtin == CD)
		return (cd(size, args, data));
	if (builtin == PWD)
		return (pwd(1));
	if (builtin == EXPORT)
		return (export(size, args, &data->lst_env));
	if (builtin == UNSET)
		return (unset(size, args, &data->lst_env));
	if (builtin == ENV)
	{
		env(data->lst_env);
		return (0);
	}
	if (builtin == EXIT)
		ft_exit(args, data, size);
	return (0);
}
