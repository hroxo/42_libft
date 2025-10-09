/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 22:09:38 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:47:13 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (temp);
}

/* 
-> O memset funcio byte por byte dai estarmos a 
 usar char pois char e um byte (8 bits).
-> Utilizamos unsigned char pois temos um maior range.
-> Aplicamos unsigned char no c para cobrir casos 
 em que este e negativo ou superior a 255
 temp aponta para o mesmo sito que s dai retornamos temp e nao s (+ facil)
 o .n e para indicar que .n e documentacao
 */
