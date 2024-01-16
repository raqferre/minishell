/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quote_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:29:28 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:29:31 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: quote_size(char *str, char quote)
 * Scope	: counts bytes that are between quotes

 * Input	: the string that is being scanned and the quote type
 * Output	: the number of bytes that are between quotes
 * Errors	: not applicable
 *
 * Uses		: new_index()
 */
int	quote_size(char *str, char quote)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != quote)
		i++;
	return (i);
}
