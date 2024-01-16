/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:35:29 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:35:31 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		(*f)(index, &s[index]);
		index++;
	}
	return ;
}

/* #include <stdlib.h>
#include <stdio.h>

void    ft_toupper_iteri(unsigned int i, char* c)
{
    (void) i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(void)
{
	
	char str_ft_striteri[] = "eu quero ser maiuscula";
	ft_striteri(str_ft_striteri, ft_toupper_iteri);
	printf("%s\n", str_ft_striteri);
}
 */
