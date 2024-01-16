/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:25:25 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:25:33 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_shell(t_shell *data)
{
	if (data->line)
		free(data->line);
	if (data->lst_token)
		clear_token(&data->lst_token);
	if (data->lst_sentence)
		clear_sentence(&data->lst_sentence);
	if (data->pipes)
		clear_pipe(data);
	if (data->reds)
		free(data->reds);
	init_shell(data);
}
