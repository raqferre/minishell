/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_to_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:14:15 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:14:23 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**env_to_array(t_env *lst)
{
	t_env	*tmp;
	char	*env_str;
	char	**env_array;

	tmp = lst;
	env_str = NULL;
	while (tmp)
	{
		env_str = ft_strjoin_free(env_str, tmp->key);
		env_str = ft_strjoin_free(env_str, "=");
		env_str = ft_strjoin_free(env_str, tmp->value);
		env_str = ft_strjoin_free(env_str, "?");
		tmp = tmp->next;
	}
	env_array = ft_split(env_str, '?');
	free(env_str);
	return (env_array);
}
