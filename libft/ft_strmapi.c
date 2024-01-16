/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:37:27 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:37:31 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*scpy;
	unsigned int	slen;
	unsigned int	index;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	scpy = (char *)malloc((slen + 1) * sizeof(char));
	if (scpy == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		scpy[index] = (*f)(index, s[index]);
		index++;
	}
	scpy[index] = '\0';
	return (scpy);
}

/* #include <stdio.h>
char	test_ft_strmapi(unsigned int index, char s)
{
	(void) index;
	s = ft_toupper(s);
	return (s);
}

int main(void)
{
	
	const char *str_ft_strmapi = "eu quero ser maiuscula";
	const char *str_ft_strmapi2;
	str_ft_strmapi2 = ft_strmapi(str_ft_strmapi, test_ft_strmapi);
	
	printf("Antes da função: %s\n", str_ft_strmapi);
	printf("Depois da função: %s\n", str_ft_strmapi2);
} */
