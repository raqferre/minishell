/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_quote_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:29:08 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:29:13 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: no_quote_size(char *str)
 * Scope	: counts bytes that aren't quotes

 * Input	: the string that is being scanned
 * Output	: the number of bytes that aren't quotes
 * Errors	: not applicable
 *
 * Uses		: rem_str_quotes() and while_no_quotes()
 */
int	no_quote_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\'' && str[i] != '\"')
		i++;
	return (i);
}
