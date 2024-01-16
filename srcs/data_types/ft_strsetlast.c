/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsetlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:02:44 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:02:49 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_strsetlast(t_string *lst, t_string *laststr)
{
	while (lst)
	{
		lst->last = laststr;
		lst = lst->next;
	}
}
