/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:48:59 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:33:25 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*big_str;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (!s1[0] && !s2[0])
		return (ft_strdup(""));
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	big_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!big_str)
		return (NULL);
	while (i < len1)
	{
		big_str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		big_str[i] = s2[i - len1];
		i++;
	}
	big_str[i] = 0;
	return (big_str);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void) argc;
	printf("output: %s\n", ft_strjoin(argv[1], argv[2]));
	return 0;
}
*/
