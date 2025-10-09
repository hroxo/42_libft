/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:29:45 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:44:24 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr / 10 > 0)
		ft_putnbr_fd(nbr / 10, fd);
	c = (nbr % 10) + '0';
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
	int fd = open(argv[1], O_RDWR);
	ft_putnbr_fd(atoi(argv[2]), fd);
	return (0);
}
*/
