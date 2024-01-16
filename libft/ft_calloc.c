/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:45:44 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/16 23:45:47 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	filled;

	filled = count * size;
	ptr = malloc (filled);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, filled);
	return (ptr);
}
