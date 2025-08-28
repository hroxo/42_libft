/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:21:20 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 21:38:33 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((needle[j] || haystack[j + i])
				&& needle[j] == haystack[j + i]
				&& j + i < len)
				j++;
			if (needle[j] == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;

	printf("meu\n\n%s\n", ft_strnstr(argv[1], argv[2], (size_t)atoi(argv[3])));
	//printf("meu\n\n%s\n", strnstr(argv[1], argv[2], (size_t)atoi(argv[3])));
}
*/
