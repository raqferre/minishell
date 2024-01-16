/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:02:55 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:03:00 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strsize(t_string *lst)
{
	int	nodes;

	nodes = 0;
	while (lst)
	{
		nodes++;
		lst = lst->next;
	}
	return (nodes);
}
