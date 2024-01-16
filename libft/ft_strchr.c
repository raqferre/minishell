/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:33:50 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:33:55 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	if (!s)
		return (NULL);
	while (s[index] != (char)c)
	{
		if (s[index] == '\0')
			return (NULL);
		index++;
	}
	return ((char *) &s[index]);
}
