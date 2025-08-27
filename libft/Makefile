# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 18:47:29 by hroxo             #+#    #+#              #
#    Updated: 2025/08/27 14:50:40 by hroxo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC =	ft_isalpha.c \
       	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	memset.c \
	ft_bzero.c
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
