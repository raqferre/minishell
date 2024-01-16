/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protect_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <raqferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:03:22 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 02:03:24 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Input			:void *arg - argument can be of any type
 * Scope			:checks whether dynamic memory allocation has occurred
 * Output			:none
 * 					:or
 * 					:error and exit
 */
void	protect_malloc(void *arg)
{
	if (arg == NULL)
	{
		printf("%s\n", strerror(errno));
		exit(errno);
	}
}
