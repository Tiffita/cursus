# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 16:55:08 by prmarott          #+#    #+#              #
#    Updated: 2023/10/01 18:30:02 by prmarott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c

OBJECTS = $(SOURCES:.c=.o) 

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) 
	
%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@
.PHONY : clean fclean all re 

clean :
	@rm -rf $(OBJECTS) 
fclean :
	@rm -rf $(OBJECTS) $(NAME) 
re : fclean all 










