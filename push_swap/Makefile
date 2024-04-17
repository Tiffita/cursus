# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 18:53:12 by prmarott          #+#    #+#              #
#    Updated: 2024/04/17 13:48:10 by prmarott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft

SRCS =  main.c algo_calculate_costs.c algo_index_and_target_for_cost.c \
        algo_moves_cost.c error_utils.c parsing.c \
        for_size_and_index.c node_operations_push.c utils.c \
        node_operations_reverse.c node_operations_rotate.c \
        node_operations_swap.c sorting1.c sorting2.c \
        stack_operations.c

OBJS = ${SRCS:.c=.o}

%.o : %.c
	$(CC) -c $(FLAGS) $< -o $@

${NAME} : ${OBJS}
	$(MAKE) -C $(LIBFT)
	${CC} ${FLAGS} ${OBJS} -L${LIBFT} -lft -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}
	$(MAKE) -C $(LIBFT) clean

fclean: clean
	${RM} ${NAME}
	$(MAKE) -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
