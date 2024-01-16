/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:16:13 by raqferre          #+#    #+#             */
/*   Updated: 2023/09/17 00:16:18 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(del)(lst->content);
	free(lst);
}

/* 
#include <stdio.h>
void printlst(t_list *node)
{
	while(node)
	{
		printf("%s\n", node ->content);
		node = node -> next;
	}
}

void ft_del(void *content)
{
	content = 0;
}


int main(void)
{
	t_list *people;
	char *content1;
	char *content2;
	char *content3;
	char *content4;
	
	content1 = "izsoares";
	content2 = "antes de izsoares";
	content3 = "antes de antes";
	content4 = "serei o ultimo?";
	people = ft_lstnew(content1);
	ft_lstadd_front(&people, ft_lstnew(content2));
	ft_lstadd_front(&people, ft_lstnew(content3));
	ft_lstadd_back(&people, ft_lstnew(content4));
	printlst(people);
	ft_lstdelone(ft_lstlast(people), &ft_del);
	printlst(people);
	return (0);
}
 */
