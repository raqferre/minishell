/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:01:42 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:01:44 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_stradd_front(t_string **lst, t_string *new)
{
	if (!(*lst))
		*lst = new;
	else
	{
		new->last = (*lst)->last;
		new->next = *lst;
		*lst = new;
	}
}
