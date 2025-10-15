/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:22:05 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/15 13:35:39 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trimmed;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	trimmed = ft_substr(s1, i, j - i);
	return (trimmed);
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
