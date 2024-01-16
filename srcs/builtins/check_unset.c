/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_unset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:55:14 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 01:55:19 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Input			:char *str - environment variable in wrong format
 * Output			:print the error on the screen
 */
static void	unset_error(char *str)
{
	ft_putstr_fd("minishell: unset: ", STDERR_FILENO);
	ft_putstr_fd("`", STDERR_FILENO);
	ft_putstr_fd(str, STDERR_FILENO);
	ft_putendl_fd("': not a valid identifier", STDERR_FILENO);
}

/*
 * Input			:char *key - environment variable key
 * Scope			:checks that the key is in the correct format
 * Output			:-1 error
 *					: 1 sucess
 */
int	check_unset(char *key)
{
	int	i;
	int	code;

	i = -1;
	code = SUCESS_BUILTINS;
	while (key[++i])
	{
		if (!ft_isalnum(key[i]) && key[i] != '_')
		{
			unset_error(key);
			code = ERROR_BUILTINS;
		}
	}
	return (code);
}
