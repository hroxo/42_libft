/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:44:27 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:43:01 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dsize <= d_len)
		return (dsize + s_len);
	while (src[i] && (i + d_len) < dsize - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = 0;
	return (d_len + s_len);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	dst[10] = "Ola como ";
	char	src[40] = "estas animal";
	printf("==>Original<==\n");
	int len = strlcat(dst, src, 9);
	printf("output: %i|\ndest: %s|\n", len, dst);
	char	dst1[10] = "Ola como ";
	char	src1[40] = "estas animal";
	printf("==>Meu<==\n");
	int len1 = ft_strlcat(dst1, src1, 9);
	printf("output: %i|\ndest: %s|\n", len1, dst1);
	return (0);
}
*/
