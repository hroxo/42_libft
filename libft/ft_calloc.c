/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:11:57 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/23 22:11:49 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	i;

	i = 0;
	if (nmemb * size > 2147483647)
		return (NULL);
	out = malloc(nmemb * size);
	if (!out)
		return (NULL);
	while (i < (nmemb * size))
	{
		*(unsigned char *)(out + i) = 0;
		i++;
	}
	return (out);
}
/*
#include <stdio.h>

int main()
{
	char *tab;

	tab = calloc(3, sizeof(int));
	for (int i = 0; i < 3; i++) 
		printf("%i", tab[i]);
	free(tab);
	return (0);
}
*/
