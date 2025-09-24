/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 20:07:15 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/24 17:52:51 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	if (n == 0)
		return (0);
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while ((ps1[i] == ps2[i]) && (i < n + 1))
		i++;
	return (ps1[i] - ps2[i]);
}


#include <stdio.h>
#include <string.h>
int main()
{
	char	s2[4] = {0, 0, 42, 0};
	char	s1[4] = {0, 0, 42, 0};

	printf("Original\n\n%i\n", memcmp(s1, s2, 4));
	printf("MEO\n\n%i\n", ft_memcmp(s1, s2, 4));
	return (0);
}

