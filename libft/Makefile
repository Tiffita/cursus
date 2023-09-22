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

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

EXTENDED = ft_isspace.c ft_isxdigit.c ft_abs.c ft_putchar.c ft_putstr.c \
	ft_strcpy.c

OBJECTS = $(SOURCES) $(BONUS) $(EXTENDED)
all : $(NAME)
$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(INCLUDES)
%.o : %.c
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@
.PHONY : clean fclean all re bonus

clean :
	@rm -rf $(OBJECTS)
fclean :
	@rm -rf $(OBJECTS) $(NAME)
re : fclean all










