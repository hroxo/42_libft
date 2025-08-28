/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:45:06 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 15:57:10 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char word[40] = "Ola tudo bem?";
	printf("==>O meu<==\n");
	printf("output: %s\n\n", ft_strchr(word, ' '));
	printf("==>O original<==\n");
	printf("output: %s\n\n", strchr(word, ' '));
	return 0;
}
*/
