#include "smp_enc.h"

typedef struct node{

    int elemento;
    struct node* prox;
}Node;

typedef struct lista{

    int tam;
    Node* Primeiro;
    Node* Ultimo;
}Lista;

Lista* criaLista(){

    Lista* lista = malloc(sizeof(Lista));
    lista->tam = 0;
    lista->Primeiro = malloc(sizeof(Node));
    lista->Ultimo = lista->Primeiro;
    lista->Primeiro->prox = NULL;
    
    return lista;
}

void adicionar(Lista* lista, int x){

    Node* nodeAtual = lista->Ultimo;

    nodeAtual->prox = malloc(sizeof(Node));
    lista->tam++;
    lista->Ultimo = nodeAtual->prox;
    lista->Ultimo->elemento = x;
    lista->Ultimo->prox = NULL;
}

void remover(Lista* lista, int x){

    Node* nodeAtual = lista->Primeiro;

    while(nodeAtual->prox != NULL){

        if(nodeAtual->prox->elemento == x){

            Node* aux = nodeAtual->prox;

            if(aux == lista->Ultimo){

                lista->Ultimo = nodeAtual;
            }

            nodeAtual->prox = aux->prox;
            free(aux);
            lista->tam--;

            return;
        }

        nodeAtual = nodeAtual->prox;
    }
}

int tamanho(Lista* lista){

    return lista->tam;
}

int estaVazia(Lista* lista){

    return lista->tam == 0;
}

void mataLista(Lista* lista){

    Node* nodeAtual = lista->Primeiro;
    Node* aux = NULL;

    while(nodeAtual != NULL){

        aux = nodeAtual->prox;
        free(nodeAtual);
        nodeAtual = aux;
    }

    free(lista);
}