/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:01:21 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:01:23 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_stradd_back(t_string **lst, t_string *new)
{
	if (!(*lst))
		*lst = new;
	else
	{
		(*lst)->last->next = new;
		ft_strsetlast(*lst, new);
	}
}
