/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_env.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:03:31 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:03:35 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Input			:char *key - environment variable key
 *					:char *value - environment variable value
 *					:char size - amount of environment variable
 * Scope			:adding the key and value in a new node
 * Output			:a new node with the data from env
 */
t_env	*new_env(char *key, char *value)
{
	t_env	*node;

	node = (t_env *)malloc(sizeof(t_env));
	protect_malloc(node);
	node->key = ft_strdup(key);
	node->value = ft_strdup(value);
	node->next = NULL;
	return (node);
}

/*
 * Input			:t_env *env - envp list(head)
 *					:char *key - environment variable key
 *					:char *value - environment variable kvalue
 * Scope			:creating a new node
 * Output			:add keys and values to the node
 */
t_env	*addfront_env(t_env *env, char *key, char *value)
{
	t_env	*new;

	new = new_env(key, value);
	if (env == NULL)
		env = new;
	else
	{
		new->next = env;
		env = new;
	}
	return (env);
}

void	envdel_one(t_env *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/*
 * Input			:t_env - envp list
 * Scope			:clear env list
 * Output			:none
 */
void	clear_env(t_env **env)
{
	t_env	*node;

	while (*env)
	{
		node = *env;
		*env = (*env)->next;
		envdel_one(node);
		node = NULL;
	}
}
