/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:48:59 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/29 16:14:06 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	islen_s1;
	size_t	islen_s2;
	size_t	istotal_len;
	size_t	i;
	char	*str_joined;

	i = 0;
	islen_s1 = ft_strlen(s1);
	islen_s2 = ft_strlen(s2);
	istotal_len = islen_s1 + islen_s2;
	str_joined = malloc(sizeof(char) * (istotal_len + 1));
	if (!str_joined)
		return (NULL);
	str_joined = ft_strdup(s1);
	while (i < islen_s2)
	{
		str_joined[islen_s1 + i] = s2[i];
		i++;
	}
	str_joined[istotal_len] = 0;
	return (str_joined);
}


#include <stdio.h>
int	main(int argc, char **argv)
{
	(void) argc;
	printf("output: %s\n", ft_strjoin(argv[1], argv[2]));
	return 0;
}
