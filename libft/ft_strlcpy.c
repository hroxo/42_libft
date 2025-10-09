/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:56:49 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:45:27 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize != 0)
	{
		while (*(src + i) && i < dsize - 1)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = 0;
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	src[20] = "Ola tudo bem";
	char	dst[20];

	printf("==>Original ft_strlcpy<==\n");
	printf("%s\n%d\n", dst,
		(int)strlcpy(dst, src, 3));
	printf("==>Meu ft_strlcpy<==\n");
	printf("%s\n%d\n", dst,
		(int)ft_strlcpy(dst, src, 5));
}
*/
