/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 20:52:43 by hroxo             #+#    #+#             */
/*   Updated: 2025/08/29 21:13:31 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*output;

	i = 0;
	len = ft_strlen(s);
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	while (s[i])
	{
		output[i] = (*f)(i, s[i]);
		i++;
	}
	output[i] = 0;
	return (output);
}
