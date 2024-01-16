/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:11:48 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:13:55 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	args_size(char **args)
{
	int	size;

	size = 0;
	while (args[size])
		size++;
	return (size);
}
