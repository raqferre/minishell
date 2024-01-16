/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_unlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:00:45 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:00:48 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	remove_first(t_env **lst, t_env *to_remove);
static void	remove_later(t_env **lst, t_env *to_remove);

/*
 * Fn		: env_unlink(t_env **lst, t_env *to_remove)
 * Scope	: remove node from list and relink remaining nodes
 * Input	: t_env ** - address of list
 *			: t_env * - node to be unlinked
 * Output	: t_env * - the unlinked node that can be freed
 * Errors	: not applicable
 * Uses		: unset
 */
t_env	*env_unlink(t_env **lst, t_env *to_remove)
{
	t_env	*tmp;

	tmp = *lst;
	while (tmp && tmp != to_remove)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	if (tmp == *lst)
		remove_first(lst, to_remove);
	else
		remove_later(lst, to_remove);
	return (to_remove);
}

static void	remove_first(t_env **lst, t_env *to_remove)
{
	*lst = (*lst)->next;
	to_remove->next = NULL;
}

static void	remove_later(t_env **lst, t_env *to_remove)
{
	t_env	*previous;

	previous = *lst;
	while (previous->next != to_remove)
		previous = previous->next;
	previous->next = to_remove->next;
	to_remove->next = NULL;
}
