/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:44:24 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/16 23:44:27 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_digit_base(char c)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (ft_tolower(c) != base[i] && base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, int str_base)
{
	int	number;
	int	signal;
	int	digit;

	number = 0;
	signal = 1;
	digit = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str && (str_base >= 2 && str_base <= 16))
	{
		digit = is_digit_base(*str);
		if (digit >= 0)
		{
			number = number * str_base;
			number = number + digit;
		}
		++str;
	}
	return (number * signal);
}
