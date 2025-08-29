/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:57:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/29 19:32:46 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	score;
	int		flag;

	flag = 1;
	i = 0;
	score = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			flag = 1;
		}
		else
		{
			if (flag)
				score++;
			flag = 0;
		}
		i++;
	}
	return (score);
}

static char	*new_string(char *s, char c, size_t *pw)
{
	char	*str;
	size_t	j;
	size_t	w;

	w = *pw;
	j = 0;
	while (s[w + j] && s[w + j] != c)
		j++;
	str = malloc(sizeof(char) * ((int)j + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (s[w] && s[w] != c)
		str[j++] = s[w++];
	str[j] = 0;
	*pw = w;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	w;

	w = 0;
	i = 0;
	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[w])
	{
		strs[i] = new_string((char *)s, c, &w);
		if (strs[i] == NULL)
		{
			free(strs);
			return (NULL);
		}
		while (s[w] && s[w] == c)
			w++;
		i++;
	}
	strs[i] = 0;
	return (strs);
}

/*
#include <stdio.h> //Todo remove

int main(int argc, char **argv)
{
	(void) argc;
	char	**strs;

	strs = ft_split(argv[1], argv[2][0]);
	for (int i = 0; i < 5; i++)
	{
		printf("%i string: %s\n\n", (i + 1), strs[i]);
		free(strs[i]);
	}
	free(strs);
}
*/
