/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_quotes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:09:01 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:09:04 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_quotes	which_quotes(char c)
{
	if (c == '\'')
		return (SINGLE);
	if (c == '\"')
		return (DOUBLE);
	return (NONE);
}
