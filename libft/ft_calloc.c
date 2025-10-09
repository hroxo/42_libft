/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:11:57 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 18:12:20 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	i;

	i = nmemb * size;
	out = malloc(i);
	if (!out)
		return (NULL);
	ft_bzero(out, i);
	return (out);
}
//
// #include <stdio.h>
//
// int main()
// {
// 	char *tab;
//
// 	tab = calloc(SIZE_MAX, SIZE_MAX);
// 	// for (int i = 0; i < 3; i++) 
// 	// if (tab)
// 	// 	free(tab);
// 	printf("%i", tab[0]);
// 	return (0);
// }
//
