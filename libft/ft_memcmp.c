/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 20:07:15 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/29 19:42:11 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	while ((p_s1[i] == p_s2[i] && (i < n)))
		i++;
	return (p_s1[i] - p_s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s2[23] = "HellO world!";
	char	s1[23] = "Hello world!";
	printf("Original\n\n%i\n", memcmp(s1, s2, 22));
	printf("MEO\n\n%i\n", ft_memcmp(s1, s2, 22));
	return (0);
}
*/
