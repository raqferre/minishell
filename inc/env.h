/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:49:16 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:49:21 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H
# include "types.h"

typedef enum e_quotes
{
	NONE,
	SINGLE,
	DOUBLE,
}	t_quotes;

typedef struct s_repl
{
	t_quotes	quote;
	char		*old;
	int			old_sz;
	char		*new;
	int			new_sz;
}	t_repl;

void		get_entry(char **key, char **value, char *var, int len);

// Var expansion
char		*expand_sentence(char **sentence, t_env *env, int hdoc);
t_string	*scan_sentence(char *sentence, t_env *env, int hdoc);
char		*get_value(char *var, int size, t_env *env);
t_quotes	which_quotes(char c);

#endif
