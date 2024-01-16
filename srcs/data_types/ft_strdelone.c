/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:02:20 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:02:22 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_strdelone(t_string *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
