/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexp_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:10:38 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:18:43 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(unsigned long int n)
{
	unsigned long int	i;
	int					length;
	char				*x;

	i = 0;
	x = "0123456789abcdef";
	length = 0;
	if (n > 15)
		length += ft_puthex(n / 16);
	i = n % 16;
	length += ft_putchar_pf(x[i]);
	return (length);
}

int	ft_puthexp_pf(unsigned long int nbr)
{
	int	length;

	length = 0;
	length += write (1, "0x", 2);
	length += ft_puthex(nbr);
	return (length);
}
