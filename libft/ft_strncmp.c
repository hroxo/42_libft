/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:42:57 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/23 15:29:30 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	printf("==>Original<==\n%i\n\n",
		strncmp("12334", "1235", 6));
	printf("==>MEO<==\n%i\n\n",
		ft_strncmp("12334", "1235", 6));
	return (0);
}
*/
