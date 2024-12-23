# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elfo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 22:04:55 by elfo              #+#    #+#              #
#    Updated: 2024/12/20 17:43:10 by elfo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_FILE = libft.a
SOURCE_PATH = ./srcs
INCLUDE_PATH = ./includes

SOURCE_FILES = *.c
OBJECT_FILES = *.o

all: $(NAME_FILE)

$(NAME_FILE):
	cc -Wall -Wextra -Werror -I $(INCLUDE_PATH) -c $(SOURCE_PATH)/*
	ar -rv $(NAME_FILE) $(OBJECT_FILES)
	ranlib $(NAME_FILE)

clean:
	rm -rf $(OBJECT_FILES)

fclean: clean
	rm -rf $(NAME_FILE)

re: fclean all
