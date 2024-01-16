/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:01:11 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:01:13 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_lst_to_str(t_string *lst)
{
	char	*str;
	size_t	length;
	int		i;

	length = ft_strtotallen(lst);
	if (!length)
		return (NULL);
	str = malloc((length + 1) * sizeof(*str));
	str[length] = '\0';
	i = 0;
	while (lst)
	{
		if (lst->content)
			ft_memcpy(&str[i], lst->content, lst->length);
		i += lst->length;
		lst = lst->next;
	}
	return (str);
}
