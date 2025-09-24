/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:22:05 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/24 23:04:58 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	isset(char s, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (s == set[j])
			return (1);
		j++;
	}
	return (0);
}

static size_t	real_len(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s1[i] && isset(s1[i], set) == 1)
		i++;
	len = ft_strlen(s1) - 1;
	while (len > i && (isset(s1[len], set) == 1))
		len--;
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		i;
	size_t		w;
	char		*trimmedstr;

	i = 0;
	w = 0;
	len = real_len(s1, set);
	trimmedstr = malloc(sizeof(char) * (len + 1));
	if (!trimmedstr)
		return (NULL);
	
	if (len > 0)
	{
		while (s1[i] && isset(s1[i], set) == 1)
			i++;
		while (w < len + 1)
			trimmedstr[w++] = s1[i++];
	}
	trimmedstr[w] = 0;
	return (trimmedstr);
}

/*
#include <stdio.h>

int main()
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char	*s3 = ft_strtrim(s1, " \n\t");
	printf("OBJETIVO\n|%s|\n\n", s2);
	printf("RELAIDADE\n|%s|\ntamanho: %i\n", s3, (int)ft_strlen(s3));
	free(s3);
	return (0);
}
*/
