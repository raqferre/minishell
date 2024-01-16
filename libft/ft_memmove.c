/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:20:11 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 00:20:14 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*memory_dest;
	const char	*memory_src;
	size_t		index;

	memory_dest = dest;
	memory_src = src;
	index = n;
	if (memory_src < memory_dest)
	{
		while (index)
		{
			index--;
			memory_dest[index] = memory_src[index];
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
