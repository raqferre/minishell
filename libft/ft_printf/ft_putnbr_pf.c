/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:11:23 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:11:27 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	long int	nbr;
	int			length;

	length = 0;
	nbr = n;
	if (nbr < 0)
	{
		length += ft_putchar_pf('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
		length += ft_putnbr_pf(nbr / 10);
	length += ft_putchar_pf((nbr % 10) + '0');
	return (length);
}
