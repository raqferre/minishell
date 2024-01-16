/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:25:38 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:25:39 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strlen_buf(const char *s)
{
	int	length;

	length = 0;
	while (s[length])
	{
		length++;
		if (length > BUFLIM)
			return (1);
	}
	return (0);
}

void	check_buf(char **str)
{
	if (!*str)
		return ;
	if (ft_strlen_buf(*str))
	{
		free(*str);
		*str = NULL;
	}
}
