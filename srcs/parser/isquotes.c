/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isquotes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:18:41 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:19:58 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	isquotes(char c)
{
	if (c == '\"' || c == '\'')
		return (c);
	return (0);
}
