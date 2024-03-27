# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 03:12:25 by prmarott          #+#    #+#              #
#    Updated: 2023/12/02 19:17:30 by prmarott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
CC 		= gcc
CFLAGS 	= -Wall -Werror -Wextra
RM		= rm -rf
AR 		= ar rcs
SRCS 	= ft_printf.c ft_printf_utils.c

SRCS_OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(SRCS_OBJS)
	@$(AR) $(NAME) $(SRCS_OBJS)

all: $(NAME)

clean:
	@$(RM) $(SRCS_OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
