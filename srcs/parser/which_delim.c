/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_delim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:20:32 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:22:28 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_tkn	which_delim(char *delim)
{
	char	c;

	c = *delim;
	if (!isdelim(c))
		return (ERROR);
	if (c == '|')
		return (PIPE);
	if (c == '>')
	{
		if (*(delim + 1) == c)
			return (APPEND);
		return (OUT);
	}
	if (c == '<')
	{
		if (*(delim + 1) == c)
			return (HDOC);
		return (IN);
	}
	return (ERROR);
}
