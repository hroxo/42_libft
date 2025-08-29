/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:22:05 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/29 17:56:28 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	size_t	rep;

	len = 0;
	rep = 0;
	while (s1[len])
	{
		if (isset(s1[len], set))
			rep++;
		len++;
	}
	return (len - rep);
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
	while (s1[i])
	{
		if (!isset(s1[i], set))
		{
			trimmedstr[w] = s1[i];
			w++;
		}
		i++;
	}
	trimmedstr[w] = 0;
	return (trimmedstr);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("trimmed\n%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}
*/
