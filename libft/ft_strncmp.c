/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:37:42 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:37:43 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n > 0)
	{
		while (index < n - 1 && s1[index] == s2[index]
			&& (s1[index] || s2[index]))
		{
			index++;
		}
		return ((unsigned char) s1[index] - (unsigned char) s2[index]);
	}
	return (0);
}
