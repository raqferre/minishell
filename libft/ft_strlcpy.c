/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:36:46 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:36:48 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	index;

	srclen = ft_strlen(src);
	index = 0;
	if (srclen + 1 < size)
	{
		while (index < srclen +1)
		{
			dst[index] = src[index];
			index++;
		}
	}
	else if (size != 0)
	{
		index = 0;
		while (index < size - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (srclen);
}
