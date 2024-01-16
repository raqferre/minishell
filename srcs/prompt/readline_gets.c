/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readline_gets.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:26:48 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:26:49 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: readline_gets(char *line)
 * Scope	: get the output from readline() into buffer *line
 *			: if *line is not NULL, free it
 * Input	: char * - buffer
 * Output	: char * - return from readline
 * Errors	: not applicable
 * Uses		: main() [main.c]
 */
char	*readline_gets(char *line)
{
	if (line)
		free(line);
	line = NULL;
	line = readline("minishell > ");
	return (line);
}
