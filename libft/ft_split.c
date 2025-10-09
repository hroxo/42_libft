/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:57:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 16:27:17 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *str, char c)
{
	int	n;
	int	score;
	int	is_word;

	is_word = 1;
	score = 0;
	n = 0;
	while (str[n])
	{
		if (str[n] == c)
			is_word = 1;
		else
		{
			if (is_word == 1)
				score++;
			is_word = 0;
		}
		n++;
	}
	return (score);
}

static char	*ft_strdup(char const *src, int size)
{
	char	*dest;
	int		n;

	n = 0;
	dest = malloc(size + 1);
	if (dest == 0)
		return (0);
	while (src[n] && n < size)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	int		w;
	char	**out;
	int		i;

	n = 0;
	i = 0;
	out = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!out)
		return (NULL);
	while (s[n])
	{
		w = 0;
		while (s[n + w] != c && s[n + w])
			w++;
		if (w > 0)
		{
			out[i++] = ft_strdup(&s[n], w);
			n += w;
		}
		else
			n++;
	}
	out[i] = NULL;
	return (out);
}
#ifdef CRAZY_WORD
#include <stdio.h> //Todo remove

int main(int argc, char **argv)
{
	(void) argc;
	char	**strs;
	size_t i = 0;

	strs = ft_split(argv[1], argv[2][0]);
	while (strs[i])
	{
		printf("%i string: %s\n\n", (int)i, strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
}
#endif
