/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:41:36 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/29 14:36:52 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	out = malloc(len + 1);
	if (!out) 
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			while (j < len)
			{
				out[j] = s[i + j];
				j++;
			}
			break ;
		}
		i++;
	}
	out[j] = 0;
	return (out);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("output string\n%s", ft_substr(argv[1], atoi(argv[2]), (size_t)atoi(argv[3])));
	return (0);
}
*/
