/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:56:49 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 14:13:12 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (*(src + i) && i < dsize - 1)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = 0;
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	src[20] = "Ola tudo bem";
	char	dst[20];

	printf("==>Meu ft_strlcpy<==\n");
	printf("string dst: %s\noutput da funcao: %d\n", dst,
		(int)strlcpy(dst, src, 20));
	char	src1[20] = "Ola tudo bem";
	char	dst1[20];

	printf("==>Original ft_strlcpy<==\n");
	printf("string dst: %s\noutput da funcao: %d\n", dst1,
		(int)ft_strlcpy(dst1, src1,20));
}
*/
