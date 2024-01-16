/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   while_no_quotes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:30:13 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:30:15 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: while_no_quotes(char *str, int i,  char *new_str)
 * Scope	: joins the part of the string that has not a quote
 *
 * Input	: the string that is being scanned and the new string
 *				that should be without unwanted quotes
 * Output	: the  joined string without unwanted quotes
 * Errors	: not applicable
 *
 * Uses		: rem_str_quotes()
 */
char	*while_no_quotes(char *str, int i, char *new_str)
{
	char	*tmp;
	int		j;

	tmp = NULL;
	j = no_quote_size(&str[i]);
	tmp = ft_substr(str, i, j);
	new_str = ft_strjoin_free(new_str, tmp);
	free(tmp);
	return (new_str);
}
