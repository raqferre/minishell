/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:00:56 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:01:02 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	freetab(void **ptr)
{
	char	**tmp;
	int		i;

	if (!ptr)
		return ;
	i = 0;
	tmp = (char **)ptr;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(ptr);
}

void	free_array(char **tab)
{
	size_t	i;
	char	*s;

	i = 0;
	while (tab[i])
	{
		s = tab[i];
		free(s);
		i++;
	}
	free(tab);
	tab = NULL;
}
