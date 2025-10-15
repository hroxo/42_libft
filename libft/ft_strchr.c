/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:45:06 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/15 19:29:45 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(s + i));
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char word[40] = "Ola tudo bem?";
	printf("==>O meu<==\n");
	printf("%s\n\n", ft_strchr(word, 'z'));
	printf("==>O original<==\n");
	printf("%s\n\n", ft_strchr(word, 'z'));
	return 0;
}
*/
