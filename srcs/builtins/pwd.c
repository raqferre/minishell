/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:57:10 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:57:12 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	pwd(int fd)
{
	char	*path;

	path = getcwd(NULL, 0);
	ft_putendl_fd(path, fd);
	free(path);
	path = NULL;
	return (0);
}
