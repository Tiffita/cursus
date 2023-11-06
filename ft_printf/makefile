# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 03:12:25 by prmarott          #+#    #+#              #
#    Updated: 2023/10/23 04:37:09 by prmarott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CCFLAG = -Wall -Wextra -Werror

AR = ar
ARFLAG = crs

RM = rm -fr

DEPS = ft_printf.h

SCRS = ft_printf.c

SCRS_BONUS =

OBJS = $(SCRS: .c=.0)

all: $(NAME)

%.o: %.c $(DEPS)
		$(CC) $(CCFLAG) -c $< -o $@
$(NAME): $(OBJS)
		$(AR) $(ARFLAG) $@ $^

clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
