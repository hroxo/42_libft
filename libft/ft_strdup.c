/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 11:35:06 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:45:40 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*out;

	len = ft_strlen(s);
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	out[len] = 0;
	while (len)
	{
		len--;
		out[len] = s[len];
	}
	return (out);
}

/*
#include <stdio.h>

int	main()
{
	char	src[35] = "Hello \nfrom the world!";
	char	*dest;

	dest = ft_strdup(src);
	printf("ft_strdup %s\n", dest);
	printf("Original %s\n", src);
}
*/
