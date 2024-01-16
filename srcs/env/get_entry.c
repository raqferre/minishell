/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_entry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:05:46 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:05:48 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	get_entry(char **key, char **value, char *var, int len)
{
	int	i;

	i = 0;
	while (var[i] && var[i] != '=')
		i++;
	*key = ft_substr(var, 0, i);
	if (var[i])
		i++;
	*value = ft_substr(var, i, len - i);
	if (*value && !**value)
	{
		free(*value);
		*value = NULL;
	}
}
