/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexx_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:11:04 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:13:52 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexx_pf(unsigned int n)
{
	unsigned int	i;
	int				length;
	char			*x;

	i = 0;
	x = "0123456789ABCDEF";
	length = 0;
	if (n > 15)
		length += ft_puthexx_pf(n / 16);
	i = n % 16;
	length += ft_putchar_pf(x[i]);
	return (length);
}
