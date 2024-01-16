/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_quotes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:29:53 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:29:58 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: rem_str_quotes(char *str)
 * Scope	: iterate through the strings copying it content without
 *				 the unwanted quotes and releasing the old strings
 *
 * Input	: char *str
 *
 * Output	: new string without quotes
 * Errors	: not applicable
 *
 * Uses		: remove_quotes()
 */
static char	*rem_str_quotes(char *str)
{
	int			i;
	char		*new_str;
	const int	size = ft_strlen(str);

	i = 0;
	new_str = ft_strdup("\0");
	while (str[i])
	{
		if (str[i] == '\'' || str[i] == '\"')
		{
			new_str = quotes_removed(str, i, new_str);
			i = new_index(str, i);
		}
		else
		{
			new_str = while_no_quotes(str, i, new_str);
			i = i + no_quote_size(&str[i]);
		}
		if (i > size)
			break ;
	}
	free(str);
	return (new_str);
}

/*
 * Fn		: remove_quotes(char **str)
 * Scope	: iterate through the array of strings applying the
 *				rem_str_quotes function
 *
 * Input	: char **str
 *
 * Output	: void
 * Errors	: not applicable
 *
 * Uses		: create_sentences()
 */
void	remove_quotes(char **str)
{
	int		i;
	t_tkn	t;

	i = 0;
	while (str[i])
	{
		t = which_delim(str[i]);
		if (t > WORD)
			i++;
		if (t != HDOC && str[i])
			str[i] = rem_str_quotes(str[i]);
		i++;
	}
}

char	*remove_hdoc_quotes(char *str)
{
	return (rem_str_quotes(str));
}
