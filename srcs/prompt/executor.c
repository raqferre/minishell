/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:25:02 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:25:09 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	exec_sentence(t_sentence *sentence, t_shell *data)
{
	default_signals();
	if (sentence->fd_i != 0)
		dup2(sentence->fd_i, 0);
	if (sentence->fd_o != 1)
		dup2(sentence->fd_o, 1);
	close_fds(data);
	exec_command(sentence->args[0], sentence->args, data);
}

void	wait_sentences(t_shell *data)
{
	t_sentence	*tmp;
	int			status;

	tmp = data->lst_sentence;
	status = 0;
	while (tmp)
	{
		if (tmp->args[0] && tmp->hdocsign != 130)
		{
			g_global = 0;
			waitpid(tmp->pid, &status, 0);
			if (WIFSIGNALED(status))
			{
				g_global = 128 + WTERMSIG(status);
				if (g_global == 131)
					ft_putendl_fd("Quit (core dumped)", 2);
			}
			else if (WIFEXITED(status))
				g_global = WEXITSTATUS(status);
		}
		tmp = tmp->next;
	}
}

void	exec_one(t_sentence *tmp, t_shell *data, t_builtin builtin)
{
	if (tmp->fd_i == -1 || tmp->fd_o == -1)
		return ;
	if (builtin)
		call_builtin(tmp->args, data, builtin);
	close_fds(data);
}

static void	check_exec(t_sentence *tmp, t_shell *data)
{
	if (tmp->fd_i != -1 && tmp->fd_o != -1 && tmp->args[0] \
		&& tmp->hdocsign != 130)
	{
		tmp->pid = fork();
		if (tmp->pid == -1)
			print_executor_error(strerror(errno));
		if (tmp->pid == 0)
			exec_sentence(tmp, data);
	}
}

void	executor(t_shell *data)
{
	t_sentence	*tmp;
	t_builtin	builtin;

	tmp = data->lst_sentence;
	builtin = isbuiltin(tmp->args[0]);
	if (data->sentence_count == 1 && builtin > ENV)
		exec_one(tmp, data, builtin);
	else
	{
		while (tmp)
		{
			check_exec(tmp, data);
			tmp = tmp->next;
		}
		close_fds(data);
		wait_sentences(data);
	}
	setup_signals();
}
