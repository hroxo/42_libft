/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 23:41:35 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/24 20:08:41 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*pstr;
	unsigned char		*pdest;
	
	if (!dest || !src)
		return (NULL);
	pstr = (const unsigned char *)src;
	pdest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		pdest[i] = pstr[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	src[10] = "Ola miguel";
	char	*dest= NULL;
	printf("==>Minha funcao<==\n");
	printf("%s\n", (char *)ft_memcpy((void *)dest, (void *)src, 10));
	printf("==>Funcao Original<==\n");
	printf("%s\n", (char *)memcpy((void *)dest, (void *)src, 10));
}
*/
