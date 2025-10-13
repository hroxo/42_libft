/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:41:36 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:19:16 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*out;

	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	else if (start + len > str_len)
		len = str_len - start;
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s + start, len + 1);
	return (out);
}
// #include <stdio.h>
//
// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	char *str = ft_substr(argv[1], atoi(argv[2]), (size_t)atoi(argv[3]));
// 	printf("output string\n%s", str);
// 	free(str);
// 	return (0);
// }
//
