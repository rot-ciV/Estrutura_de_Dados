#include "smp_enc.h"

typedef struct node{

    int elemento;
    stuct node* prox;
}Node;

typedef struct lista{

    int tam;
    Node* Primeiro;
}Lista;