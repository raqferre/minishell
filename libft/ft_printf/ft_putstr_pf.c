/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:12:20 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:16:04 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	int	length;

	length = 0;
	if (!s)
	{
		length += write(1, "(null)", 6);
		return (length);
	}
	while (*s)
	{
		length += write (1, s++, 1);
	}
	return (length);
}
