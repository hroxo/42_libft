/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:00:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 16:07:31 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*out;

	out = NULL;
	while(*s)
	{
		if (*s == (char)c)
		{
			*out = *s;
		}
		s++;
	}
	return (out);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char word[40] = "Ola tudo bem?";
	printf("==>O meu<==\n");
	printf("output: %s\n\n", ft_strrchr(word, ' '));
	printf("==>O original<==\n");
	printf("output: %s\n\n", strrchr(word, ' '));
	return 0;
}

