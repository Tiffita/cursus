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

Node *createNode(int value, int range);
void push(Node **top, int value, int range);
int pop(Node **top);
int isEmpty(Node *top);
void freeStack(Node **top);
void split(char *input, Node **top);
void printOperations(int *operations, int count);
void swap(Node **stack);
void rotate(Node **stack);
void reverseRotate(Node **stack);
void pushAtoB(Node **stack_a, Node **stack_b);
void initialPhase(Node **stack_a, int *argv, int size);
void phase1(Node **stack_a, Node **stack_b, int size);
void phase2(Node **stack_a, Node **stack_b);
void phase3(Node **stack_a);

#endif
