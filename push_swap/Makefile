NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
PRINTFT = printft/
OBJ_DIR = obj/
SRC_DIR = srcs/

SRC_A = srcs/push_swap/push_swap.c \
        srcs/push_swap/ft_ETC.c \

OBJ_A = ${SRC_A:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_A} ${OBJ_B}
	make -C $(LIBFTDIR) $(PRINTFT)
	${CC} ${FLAGS} ${OBJ_A} ${OBJ_B} -o ${NAME} ${INCLUDE}

all: ${NAME} 

clean:
	${RM} ${OBJ_A} ${OBJ_B} ${NAME}
	@cd $(LIBFTDIR) $(PRINTFT) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) $(PRINTFT) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re