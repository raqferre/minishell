/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:11:51 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:11:55 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru_pf(unsigned int n)
{
	long int	nbr;
	int			length;

	length = 0;
	nbr = n;
	if (nbr > 9)
		length += ft_putnbru_pf(nbr / 10);
	length += ft_putchar_pf((nbr % 10) + '0');
	return (length);
}
