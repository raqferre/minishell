/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_global.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:06:02 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:06:06 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*get_global(char *var, int size)
{
	char	*value;
	char	*rest;

	value = ft_itoa(g_global);
	if (size == 0)
		return (value);
	else
	{
		rest = ft_substr(var, 1, size);
		value = ft_strjoin_free(value, rest);
		free(rest);
		return (value);
	}
}
