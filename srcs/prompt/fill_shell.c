/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:25:15 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:25:18 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	fill_shell(t_shell *data)
{
	data->sentence_count = size_sentence(&data->lst_sentence);
	data->pipe_count = counting_pipes(&data->lst_token);
	data->redirect_count = counting_redirects(&data->lst_token);
	if (data->pipe_count > 0)
	{
		data->pipes = malloc (sizeof(int *) * data->pipe_count);
		if (!data->pipes)
		{
			ft_putendl_fd("Malloc error array pipes", 2);
		}
	}
	if (data->redirect_count > 0)
	{
		data->reds = malloc (sizeof(int) * data->redirect_count);
		if (!data->reds)
		{
			ft_putendl_fd("Malloc error array reds", 2);
		}
	}
}
