/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:48:16 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/04 19:21:46 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	head = lst;
	if (!f || !lst)
		return ;
	while (head)
	{
		f(head->content);
		head = head->next;
	}
}

#include <stdio.h>

void	add_one(int *a)
{
	(*a)++;
}

void	print_lst(t_list *lst)
{
	while (lst)
	{
		printf("%ld ", (long)lst->content);
		lst = lst->next;
	}
	printf("\n");
}
void	add_wrapper(void *content)
{
	add_one((int *)content);
}

int main(int argc, char **argv)
{
	t_list	*list, *head, *next;

	head = list;
	for (int i = 1; i < argc; i++)
	{
		head = ft_lstnew((void *)(long)atoi(argv[i]));
		next = head->next;
		head = next;
	}
	printf("before func\n");
	print_lst(list);
	ft_lstiter(list, &add_wrapper);
	printf("after func\n");
	print_lst(list);
	return 0;
}
