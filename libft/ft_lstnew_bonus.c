/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:50:10 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/15 19:18:45 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->content = content;
	return (new_node);
}

/*
#include <stdio.h>

void	print_node(t_list *node)
{
	printf("%s", (char *)node->content);
}

int main(int argc, char **argv)
{
	(void) argc;
	t_list	*head;
	char *string = argv[1];

	head = ft_lstnew(string);
	print_node(head);
	return (0);
}
*/
