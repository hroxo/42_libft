/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:48:16 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:56:44 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
#include <stdio.h> //TODO remove me
#include <stdlib.h>
		   
void	print_lst(t_list *lst)
{
	while (lst)
	{
		printf("%d ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

void	add_wrapper(void *content)
{
	int *pcontent = (int *)content;
	(*pcontent)++;
}

int main(int argc, char **argv)
{
	t_list	*list, *head;

	list = NULL;
	for (int i = 1; i < argc; i++)
	{
		int *val = malloc(sizeof(int *));
		*val = atoi(argv[i]);
		head = ft_lstnew(val);
		if (!list)
		{
			list = head;
		}
		else {
			ft_lstadd_back(&list, head);
		}
	}
	printf("before func\n");
	print_lst(list);
	ft_lstiter(list, &add_wrapper);
	printf("after func\n");
	print_lst(list);
	return 0;
}
*/
