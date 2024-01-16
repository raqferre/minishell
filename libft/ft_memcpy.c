/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:19:51 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 00:19:54 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstcpy;
	const char	*srccpy;
	size_t		index;

	dstcpy = dst;
	srccpy = src;
	index = 0;
	if (src == NULL && dst == NULL)
		return (dst);
	while (n > index)
	{
		dstcpy[index] = srccpy[index];
		index++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
char str_ft_memcpy1[50] = "eu sou a string 1";
char str_ft_memcpy2[50] = "\0";

char str_memcpy1[50] = "eu sou a string 1";
char str_memcpy2[50] = "\0";

	printf("*****CREATED*****\n");
	printf("str_ft_memcpy1 before ft_memcpy() is: %s\n\n", str_ft_memcpy1);
	ft_memcpy(str_ft_memcpy1, str_ft_memcpy2, sizeof(str_ft_memcpy2));
	printf("str_ft_memcpy1 after ft_memcpy() is: %s\n\n", str_ft_memcpy1);
	
	printf("\n*****ORIGINAL*****\n");
	printf("str_memcpy1 before memcpy() is: %s\n\n", str_memcpy1);
	memcpy(str_memcpy1, str_memcpy2, sizeof(str_memcpy2));
	printf("str_memcpy1 after memcpy() is: %s\n\n", str_memcpy1);

}
*/
