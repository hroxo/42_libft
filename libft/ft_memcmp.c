/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 20:07:15 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/24 20:39:32 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "\xff\xaa\xde\x12";
        char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
        size_t size = 4;
        int i1 = ((memcmp(s1, s2, size) > 0) ? 1 : ((memcmp(s1, s2, size) < 0) ? -1 : 0));
        int i2 = ((ft_memcmp(s1, s2, size) > 0) ? 1 : ((ft_memcmp(s1, s2, size) < 0) ? -1 : 0));

	if (i1 == i2)
		printf("SUCESSO");
	else
		printf("MErda");
	return 0;
}
*/
