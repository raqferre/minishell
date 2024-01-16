/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_hdoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:05:20 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:05:22 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: expand_hdoc_var(char **sentence, t_env *env)
 * Scope	: call_expand_sentence for heredoc
 * Input	: char ** - array of strings
 *			: t_env * - list of environment variables
 * Output	: void
 * Errors	: not applicable
 * Uses		: create_sentences()
 */
void	expand_hdoc_var(char **sentence, t_env *env)
{
	*sentence = expand_sentence(sentence, env, 1);
}
