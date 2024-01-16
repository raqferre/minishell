/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:57:19 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:57:25 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Input	:char *str - environment variable in wrong format
 *			:char *key - string that was split (environment variable key
 * Scope	:checks that the key is in the correct format
 *          :if the key exists in the env list delete the node
 */
static void	delete_var(t_env **env, char *key)
{
	t_env	*node;

	node = compare_key(*env, key);
	if (*env == NULL || node == NULL)
		return ;
	envdel_one(env_unlink(env, node));
}

/*
 * Input	:int size - amount of arguments
 *			:char *str[] - arguments (command unset and/or enviroment variable)
 *			:Example: argv[0] = unset - argv[1] = students
 * Scope	:check key match
 */
int	unset(int size, char *str[], t_env **env)
{
	int	i;

	i = 0;
	if (size <= 1)
		return (0);
	while (++i < size)
	{
		if (check_varname(str[i]))
			delete_var(env, str[i]);
	}
	return (0);
}
