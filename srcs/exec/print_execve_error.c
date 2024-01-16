/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_execve_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:15:01 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:15:03 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	print_execve_error(char *str, int error)
{
	if (error == EACCES)
	{
		ft_putstr_fd("minishell: ", 2);
		ft_putstr_fd(str, 2);
		ft_putstr_fd(": ", 2);
		ft_putendl_fd(strerror(errno), 2);
		g_global = 126;
	}
	else
	{
		ft_putstr_fd(str, 2);
		ft_putendl_fd(": command not found", 2);
		g_global = 127;
	}
}
