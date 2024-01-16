/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_to_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:14:42 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:14:44 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void		copy_path(t_string **lst, char *path, size_t size);

/*
 * Fn		: path_to_lst(char *path)
 * Scope	: convert PATH from string to list
 * Input	: char * - PATH var
 * Output	: t_string *
 * Errors	: NULL - PATH is NULL, or could not convert
 * Uses		: call_execve (call_execve.c)
 */
t_string	*path_to_lst(char *path)
{
	t_string		*lst;
	unsigned int	i;

	if (!path)
		return (NULL);
	lst = NULL;
	while (*path)
	{
		i = 0;
		while (path[i] && path[i] != ':')
			i++;
		copy_path(&lst, path, i);
		path += i;
		if (*path)
			path++;
	}
	return (lst);
}

static void	copy_path(t_string **lst, char *path, size_t size)
{
	char	*str;

	str = ft_substr(path, 0, size);
	ft_stradd_back(lst, ft_strnew(str, size));
}
