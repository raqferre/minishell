/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:44:58 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/16 23:45:02 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	index;
	int	signal;

	number = 0;
	index = 0;
	signal = 1;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			signal *= -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		number = number + (str[index] - '0');
		index++;
		if (ft_isdigit(str[index]))
			number = number * 10;
	}
	return (signal * number);
}
