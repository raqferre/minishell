/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_export.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:54:59 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:55:06 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Input			:char *str - environment variable in wrong format
 *					:char *key - string that was split (environment variable key
 * Scope			:checks that the key is in the correct format
 * Output			:-1 error
 *					: 1 sucess
 */
int	check_export(char *key, char *str)
{
	int	i;
	int	code;

	i = -1;
	code = SUCESS_BUILTINS;
	while (key[++i])
	{
		if (!ft_isalnum(key[i]) && key[i] != '_')
		{
			export_error(str);
			code = ERROR_BUILTINS;
		}
	}
	return (code);
}
