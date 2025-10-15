/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:57:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/15 19:39:00 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	get_len(char *str, char c)
{
	int	w;

	w = 0;
	while (str[w] != c && str[w])
		w++;
	return (w);
}

static void	free_strs(char **strs, int index)
{
	while (index >= 0)
		free(strs[index--]);
	free(strs);
}

static char	*ft_strndup(char const *src, char c, int index, char **strs)
{
	char	*dest;
	int		n;
	int		size;

	size = get_len((char *)src, c);
	n = 0;
	dest = malloc(size + 1);
	if (!dest)
	{
		free_strs(strs, index - 1);
		return (0);
	}
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
	char	**out;
	int		i;

	n = 0;
	i = 0;
	out = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!out)
		return (NULL);
	while (s[n])
	{
		if (get_len((char *)&s[n], c) > 0)
		{
			out[i] = ft_strndup(&s[n], c, i, out);
			if (!out[i])
				return (NULL);
			n += get_len((char *)&s[n], c);
			i++;
		}
		else
			n++;
	}
	out[i] = NULL;
	return (out);
}
// #include <stdio.h> //Todo remove
//
// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	char	**strs;
// 	size_t i = 0;
//
// 	strs = ft_split(argv[1], argv[2][0]);
// 	while (strs[i])
// 	{
// 		printf("%i string: %s\n\n", (int)i, strs[i]);
// 		free(strs[i]);
// 		i++;
// 	}
// 	free(strs);
// }
// #endif
