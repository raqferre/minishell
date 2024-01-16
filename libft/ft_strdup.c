/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:34:37 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:34:39 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1cpy;
	char	*s2;
	size_t	s1len;
	size_t	index;

	if (!s1)
		return (NULL);
	s1cpy = (char *)s1;
	s1len = ft_strlen(s1cpy);
	s2 = malloc((s1len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	index = 0;
	while (index < s1len)
	{
		s2[index] = s1cpy[index];
		index++;
	}
	s2[index] = '\0';
	return (s2);
}
