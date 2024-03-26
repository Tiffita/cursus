#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	  long			number;
	  long			rank;
	  struct s_stack	*next;
	  struct s_stack	*prev;
}	  t_stack;

#endif
