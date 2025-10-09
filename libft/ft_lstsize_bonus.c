/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 00:32:02 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:56:53 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list	*head;
	t_list	*current;

	for (int i = 1; i < argc; i++) 
	{
		current = ft_lstnew(argv[i]);
		head = current;
		current = current->next;
	}
	printf("%i\n", ft_lstsize(head));
	return (0);
}
*/
