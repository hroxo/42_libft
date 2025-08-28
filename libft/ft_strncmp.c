/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:42:57 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 19:31:08 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && (i < n))
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("==>Original<==\n%i\n\n",
		strncmp(argv[1], argv[2], (size_t)atoi(argv[3])));
	printf("==>MEO<==\n%i\n\n",
		ft_strncmp(argv[1], argv[2], (size_t)atoi(argv[3])));
	return (0);
}
*/
