/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:48:08 by hroxo             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/09/24 19:59:42 by hroxo            ###   ########.fr       */
=======
/*   Updated: 2025/10/09 21:39:40 by hroxo            ###   ########.fr       */
>>>>>>> main
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	*word = NULL;

	ft_bzero(word, 3);
	printf("====> MINE <====\n");
	printf("after ft_bzero\n");
	printf("%s", word);
	printf("ascii values:\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%i character:\nascii value: %i\n", i, word[i]);
	}
	bzero((void *)word, 3);
	printf("====> ORIGINAL <====\n");
	printf("after bzero\n");
	printf("%s", word);
	printf("ascii values:\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%i character:\nascii value: %i\n", i, word[i]);
	}
}
*/
