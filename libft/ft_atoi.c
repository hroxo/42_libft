/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 21:43:20 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 22:06:15 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sig;
	int	result;

	result = 0;
	sig = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] <= 13 && nptr[i] >= 9))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sig = -1;
		}
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		result = (nptr[i] - '0') + (result * 10);
		i++;
	}
	return (result * sig);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	printf("==>ft_atoi<==\n%i\n\n", ft_atoi("  	-2147483648"));
	printf("==>atoi<==\n%i\n\n", atoi("  	-2147483648"));
	printf("==>ft_atoi<==\n%i\n\n", ft_atoi("  	2147a483647"));
	printf("==>atoi<==\n%i\n\n", atoi("  	2147b83647"));
	printf("==>ft_atoi<==\n%i\n\n", ft_atoi(" + 	2147483647"));
	printf("==>atoi<==\n%i\n\n", atoi(" - 	2147483647"));

	return 0;
}
*/
