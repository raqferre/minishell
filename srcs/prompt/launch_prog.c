/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_prog.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:25:58 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:26:03 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	trim_line(t_shell *data);

/*
 * Fn		: launch_prog(t_shell *data)
 * Scope	: Run the REPL loop
 * Input	: t_shell * - pointer to the global struct
 * Output	: void
 * Errors	: not applicable
 * Uses		: main() [main.c]
 */
void	launch_prog(t_shell *data)
{
	if (data->line == NULL)
		return ;
	data->line = expand_sentence(&data->line, data->lst_env, 0);
	trim_line(data);
	if (!data->line)
		return ;
	if (scan_line(&data->lst_token, data->line) == 0
		&& lexer(data->lst_token) == 0)
	{
		create_sentences(&data->lst_token, &data->lst_sentence);
		fill_shell (data);
		if (data->pipe_count > 0 || data->redirect_count > 0)
		{
			open_pipe_reds(data);
			clean_reds_sentences(data->lst_sentence);
		}
		executor(data);
	}
}

static void	trim_line(t_shell *data)
{
	char		*tmp;

	tmp = data->line;
	if (!tmp)
		return ;
	data->line = ft_strtrim(tmp, " ");
	if (data->line && !*data->line)
	{
		free(data->line);
		data->line = NULL;
	}
	free(tmp);
}
