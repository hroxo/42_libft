/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 00:01:59 by hroxo             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/09/24 20:10:38 by hroxo            ###   ########.fr       */
=======
/*   Updated: 2025/10/09 21:44:07 by hroxo            ###   ########.fr       */
>>>>>>> main
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		}
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[100] = "Learningisfun";
	char *first, *second;

	first = str;
	second = str;
	memmove(second + 8, first, 10);
	printf("==>memmove original <==\n%s\n", str);
	char str1[100] = "Learningisfun";
	first = str1;
	second = str1;
	ft_memmove(second + 8, first, 10);
	printf("==>memmove meu <==\n%s\n", str1);
	return 0;
}
*/
