/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:33:56 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:45:57 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s + i))
	{
		if (*(unsigned char *)(s + i) == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	word[42] = "Helle World!";
	
	printf("==>Original<==\n%s\n\n", (char *)memchr(word, ' ', 1));
	printf("==>MEO<==\n%s\n\n", (char *)ft_memchr(word, ' ', 1));
	return (0);
}
*/
