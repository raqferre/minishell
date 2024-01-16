/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stash_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:06:28 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:06:30 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: stash_string(t_string **lst, char *sentence, int size)
 * Scope	: stores the string up to the character before $
 * Uses		: split_sentence()
 */
void	stash_string(t_string **lst, char *sentence, int size)
{
	char	*to_stash;

	to_stash = ft_substr(sentence, 0, size);
	if (to_stash && *to_stash)
		ft_stradd_back(lst, ft_strnew(to_stash, size));
}
