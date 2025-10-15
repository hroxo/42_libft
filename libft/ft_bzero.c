/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:48:08 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/15 19:05:44 by hroxo            ###   ########.fr       */
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
	char	word[13] = "Ola tudo bem";

	bzero((void *)word, 3);
	printf("====> ORIGINAL <====\n");
	printf("after bzero\n");
	printf("%s", word);
	printf("ascii values:\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%i character:\nascii value: %i\n", i, word[i]);
	}
	printf("====> MINE <====\n");
	printf("after ft_bzero\n");
	printf("%s", word);
	printf("ascii values:\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%i character:\nascii value: %i\n", i, word[i]);
	}
}
*/
