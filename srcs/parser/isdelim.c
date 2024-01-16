/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdelim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:16:17 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:20:00 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	isdelim(char c)
{
	const char	*delim = "|<>";

	while (*delim)
	{
		if (c == *delim)
			return (c);
		delim++;
	}
	return (0);
}
