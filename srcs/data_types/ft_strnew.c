/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:02:30 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:02:36 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_string	*ft_strnew(char *str, size_t length)
{
	t_string	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = str;
	new->length = length;
	new->last = new;
	new->next = NULL;
	return (new);
}
