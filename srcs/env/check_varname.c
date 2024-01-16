/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_varname.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:04:53 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:04:55 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: check_varname(char *key)
 * Scope	: check if string is a valid variable name
 * Input	: char * - the variable name (no $)
 * Output	: int - 1 if is a valid name
			  int - 0 if in not a valid name
 * Errors	: not aplicable
 * Uses		:
 */
int	check_varname(char *key)
{
	int	len;

	len = 0;
	if (!ft_isalpha(key[len]) && key[len] != '_')
		return (0);
	len++;
	while (key[len])
	{
		if (!ft_isalnum(key[len]) && key[len] != '_')
			return (0);
		len++;
	}
	return (1);
}

/*
 * Fn		: iscrule(int c, int first)
 * Scope	: check if char is valid in the context of a shell variable name
 * Input	: int - char to be tested
 *			: int - bool indicated if the char is supposed to be the first letter
 * Output	: int - 1 if is a valid name
			  int - 0 if in not a valid name
 * Errors	: not aplicable
 * Uses		: expvar(), in scan_sentence.c
 */
int	iscrule(int c, int first)
{
	if (first)
	{
		if (ft_isalpha(c) || c == '_' || c == '?')
			return (1);
	}
	else if (ft_isalnum(c) || c == '_')
		return (1);
	return (0);
}
