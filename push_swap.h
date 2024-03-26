#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

# include "../libft/libft.h"

typedef struct Node {
    int data;  // Dato almacenado en el nodo
    int range; // Componente de rango
    struct Node* prev; // Puntero al nodo anterior
    struct Node* next; // Puntero al nodo siguiente
} Node;


#endif
