# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 18:53:12 by prmarott          #+#    #+#              #
#    Updated: 2024/04/12 22:06:22 by prmarott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = -L/libft/
LIBFT = $(LIBFTDIR) libft.a

SRCS =  main.c algo_calculate_costs.c algo_index_and_target_for_cost.c \
        algo_moves_cost.c error_utils.c parsing.c \
        for_size_and_index.c node_operations_push.c utils.c \
        node_operations_reverse.c node_operations_rotate.c \
        node_operations_swap.c sorting1.c sorting2.c \
        stack_operations.c

OBJS = ${SRCS:.c=.o}

INCLUDE = -I $(LIBFTDIR) -I ./ libft.a

.c.o:
	${CC} -c ${FLAGS} ${INCLUDE} $< -o $@

${NAME}: ${OBJS} ${LIBFT}
	${CC} ${FLAGS} ${OBJS} ${LIBFT} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
