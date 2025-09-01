/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 22:38:44 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/01 23:25:55 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	int fd = open(argv[1], O_RDWR);
	ft_putendl_fd(argv[2], fd);
	return (0);
}
*/
