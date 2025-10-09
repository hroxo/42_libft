/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:48:43 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:42:08 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n /= 10;
		len += 2;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	long	nl;
	char	*nbr;

	nl = n;
	i = 0;
	len = nbr_len(n);
	nbr = malloc(len + 1);
	if (!nbr)
		return (NULL);
	nbr[len] = 0;
	if (nl < 0)
	{
		nl *= -1;
		nbr[i] = '-';
		i++;
	}
	while (i < len)
	{
		nbr[--len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (nbr);
}
//
// #include <stdio.h> // Todo delete me
// #include <limits.h>
// int	main()
// {
//
// 	char	*s = ft_itoa(0);
// 	printf("%i\n%s\n", nbr_len(0), s);
// 	free(s);
// 	return (0);
// }
//
