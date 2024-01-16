/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:12:40 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:13:28 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_conversion(const char *fmt, int i, va_list args)
{
	if (fmt[i + 1] == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (fmt[i + 1] == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (fmt[i + 1] == 'p')
		return (ft_puthexp_pf(va_arg(args, unsigned long int)));
	else if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	else if (fmt[i + 1] == 'u')
		return (ft_putnbru_pf(va_arg(args, unsigned int)));
	else if (fmt[i + 1] == 'x')
		return (ft_puthex_pf(va_arg(args, unsigned int)));
	else if (fmt[i + 1] == 'X')
		return (ft_puthexx_pf(va_arg(args, unsigned int)));
	else if (fmt[i + 1] == '%')
		return (ft_putchar_pf(fmt[i + 1]));
	return (0);
}
