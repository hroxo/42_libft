/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:33:30 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/28 15:40:18 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("==>Meu<==\n");
	printf("==>Bef ft_tolowe<==\n");
	printf("%s\n", argv[1]);
	for (int i = 0; argv[1][i]; i++)
		argv[1][i]= ft_tolower((int)argv[1][i]);
	printf("==>Pos ft_tolower<==\n");
	printf("%s\n\n\n", argv[1]);
	printf("==>Original<==\n");
	printf("==>Bef ft_tolower<==\n");
	printf("%s\n", argv[2]);
	for (int i = 0; argv[2][i]; i++)
		argv[2][i]= tolower((int)argv[2][i]);
	printf("==>Pos ft_tolower<==\n");
	printf("%s\n", argv[2]);
}
*/
