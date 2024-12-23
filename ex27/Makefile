# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elfo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 11:07:36 by elfo              #+#    #+#              #
#    Updated: 2024/12/23 11:19:37 by elfo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_FILE = ft_display_file
SRC_FILE = ft_display_file.c
OBJECT_FILE = ft_display_file.o

all: $(NAME_FILE)
	gcc -Wall -Wextra -Werror -c $(SRC_FILE)
	gcc -o $(NAME_FILE) $(OBJECT_FILE)

clean:
	rm -f $(OBJECT_FILE)

fclean: clean
	rm -f $(NAME_FILE)

