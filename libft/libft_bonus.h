/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 00:11:09 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/02 00:12:27 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

# include <stdlib.h>

t_list	*ft_lstnew(void *content);

#endif
