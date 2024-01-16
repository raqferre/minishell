/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isbuiltin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:56:43 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:56:47 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_builtin	isbuiltin(char *comm)
{
	if (!comm)
		return (ENOBLTN);
	if (!ft_strncmp(comm, "echo", 5))
		return (ECHO);
	if (!ft_strncmp(comm, "cd", 3))
		return (CD);
	if (!ft_strncmp(comm, "pwd", 4))
		return (PWD);
	if (!ft_strncmp(comm, "export", 7))
		return (EXPORT);
	if (!ft_strncmp(comm, "unset", 6))
		return (UNSET);
	if (!ft_strncmp(comm, "env", 4))
		return (ENV);
	if (!ft_strncmp(comm, "exit", 5))
		return (EXIT);
	return (ENOBLTN);
}
