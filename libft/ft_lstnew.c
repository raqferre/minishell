/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:18:09 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 00:18:10 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* 
#include <stdio.h>
int main(void)
{
	t_list *person;
	char *content;
	
	content = "izsoares";
	person = ft_lstnew(content);
	printf("%s\n", (char *) person->content);
	printf("%p\n", person->next);
}
 */
