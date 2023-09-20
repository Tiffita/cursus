# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 16:55:08 by prmarott          #+#    #+#              #
#    Updated: 2023/09/20 12:36:11 by prmarott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
INCLUDES = -I libft.h
CFLAGS = -Wall -Wextra -Werrors
SOURCES = *.c
OBJECTS = $(SOURCES)
all : $(NAME)
$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(INCLUDES)
%.o : %.c
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@
.PHONY : clean fclean all re

clean :
	@rm -rf $(OBJECTS)
fclean :
	@rm -rf $(OBJECTS) $(NAME)
re : fclean all










