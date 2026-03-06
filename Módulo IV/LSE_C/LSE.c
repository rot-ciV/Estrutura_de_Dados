#include "LSE.h"

typedef struct lista{

    int elemento[100];
    int tam;
}Lista;

Lista* criaLista(){

    Lista* lista = malloc(sizeof(Lista));
    lista->tam = 0;

    return lista;
}

bool vazioLista(Lista* lista){

    if(lista->tam == 0) return true;
    return false;
}

int tamLista(Lista* lista){

    return lista->tam;
}

int procura(Lista* lista, int numero){

    for(int i = 0; i < lista->tam; i++){

        if(lista->elemento[i] == numero){

            return i;
        }
    }

    return -1;
}

void insercaoOrd(Lista* lista, int numero){
    
    if(tamLista(lista) >= 100) return;

    if(vazioLista(lista)){

        lista->elemento[0] = numero;
        lista->tam++;
        return;
    }

    int i = lista->tam - 1;
    
    while(i >= 0 && lista->elemento[i] > numero){

        lista->elemento[i + 1] = lista->elemento[i];
        i--;
    }

    lista->elemento[i + 1] = numero;
    lista->tam++;
}

void remocao(Lista* lista, int numero){

    for(int i = 0; i < lista->tam; i++){

        if(lista->elemento[i] == numero){

            while(i < lista->tam - 1){

                lista->elemento[i] = lista->elemento[i + 1];
                i++;
            }

            lista->tam --;
            return;
        }
    }
}