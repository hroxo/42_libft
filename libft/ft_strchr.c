/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:45:06 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:42:38 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
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
