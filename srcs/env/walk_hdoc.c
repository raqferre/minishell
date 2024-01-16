/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walk_hdoc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:09:29 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:09:31 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	walk_hdoc(char *str, t_string **output, int index)
{
	int	i;

	i = 2;
	if (!str[i + index])
	{
		stash_string(output, str, i + index);
		return (i);
	}
	while (ft_isspace(str[i + index]))
		i++;
	while (str[i + index] && !ft_isspace(str[i + index]))
		i++;
	if (!output)
		stash_string(output, str, i + index);
	else
		stash_string(output, &str[index], i);
	return (i);
}
