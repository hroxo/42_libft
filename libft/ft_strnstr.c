/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:21:20 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:47:55 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
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

int main()
{

	printf("meu\n\n%s\n", ft_strnstr("Ola como estas", "", -1));
}
*/
