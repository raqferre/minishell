/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:19:00 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 00:19:04 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*bcpy;

	bcpy = (unsigned char *) b;
	index = 0;
	while (index < len)
	{
		if (bcpy[index] == (unsigned char) c)
			return ((unsigned char *) &bcpy[index]);
		index++;
	}
	return (NULL);
}
