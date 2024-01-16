/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default_signals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:30:27 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:30:29 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	default_signals(void)
{
	struct sigaction	dfl_int;
	struct sigaction	dfl_quit;

	sigemptyset(&dfl_int.sa_mask);
	sigemptyset(&dfl_quit.sa_mask);
	dfl_int.sa_flags = SA_RESTART;
	dfl_int.sa_handler = SIG_DFL;
	dfl_quit.sa_flags = SA_RESTART;
	dfl_quit.sa_handler = SIG_DFL;
	sigaction(SIGINT, &dfl_int, NULL);
	sigaction(SIGQUIT, &dfl_quit, NULL);
}
