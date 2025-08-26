# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 18:47:29 by hroxo             #+#    #+#              #
#    Updated: 2025/08/26 19:09:41 by hroxo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC =  ft_atoi.c \
       ft_strlen.c \
       ft_isalpha.c \
       ft_isdigit.c 
OBJ = $(SRC:.c=.o)

SRCB = 
OBJB = $(SRCB:.c=.o)

RM = rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJB)
	ar rcs $(NAME) $(OBJB)

.PHONY: all clean fclean re bonus
