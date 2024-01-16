/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtotallen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:03:10 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:03:12 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

size_t	ft_strtotallen(t_string *lst)
{
	size_t	total_len;

	total_len = 0;
	while (lst)
	{
		total_len += lst->length;
		lst = lst->next;
	}
	return (total_len);
}
