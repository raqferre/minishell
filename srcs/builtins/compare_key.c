/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:55:28 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:55:30 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Input			:t_env *env - envp list(head)
 *					:char *key - element to be compared
 * Scope			:compares if the key of the argument is the same
 * 					as the environment variable
 * Output			:existing key in the environment variable
 * 					:or
 * 					:NULL
 */
t_env	*compare_key(t_env *env, char *key)
{
	t_env	*node;

	node = env;
	while (node)
	{
		if (ft_strncmp(node->key, key, ft_strlen(key) + 1) == 0)
			return (node);
		node = node->next;
	}
	return (NULL);
}
