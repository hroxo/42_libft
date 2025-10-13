/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:11:57 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/13 11:37:46 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	i;

	i = nmemb * size;
	if (size != 0 && nmemb > (size_t)(-1) / size)
		return (NULL);
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
