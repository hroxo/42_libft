/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:56:49 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 12:16:02 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (*(src + i) && i < dsize)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main()
{
	char	src[20] = "Ola tudo bem";
	char	dst[20];

	printf("==>Meu ft_strlcpy<==\n");
	printf("string dst: %s\noutput da funcao: %d\n", dst,
		(int)ft_strlcpy(dst, src, 35));
	char	src1[20] = "Ola tudo bem";
	char	dst1[20];

	printf("==>Original ft_strlcpy<==\n");
	printf("string dst: %s\noutput da funcao: %d\n", dst1,
		(int)ft_strlcpy(dst1, src1, 35));
}
*/
