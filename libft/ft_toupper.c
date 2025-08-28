/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:23:49 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 15:32:50 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("==>Meu<==\n");
	printf("==>Bef ft_toupper<==\n");
	printf("%s\n", argv[1]);
	for (int i = 0; argv[1][i]; i++)
		argv[1][i]= ft_toupper((int)argv[1][i]);
	printf("==>Pos ft_toupper<==\n");
	printf("%s\n", argv[1]);
	printf("==>Original<==\n");
	printf("==>Bef ft_toupper<==\n");
	printf("%s\n", argv[2]);
	for (int i = 0; argv[2][i]; i++)
		argv[2][i]= toupper((int)argv[2][i]);
	printf("==>Pos ft_toupper<==\n");
	printf("%s\n", argv[2]);
}
*/
