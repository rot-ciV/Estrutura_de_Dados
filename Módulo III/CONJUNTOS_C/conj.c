#include "conj.h"

typedef struct conj
{
    int conjunto[100];
    int tam;
}Conj;

Conj* criaConj(){

    Conj* conj = malloc(sizeof(Conj));
    conj->tam = 0;
    
    return conj;
}

Conj* unir2Conj(Conj* A, Conj* B){

    Conj* novoConj = criaConj();

    for(int i = 0; i < A->tam; i++){

        insereElem(novoConj, A->conjunto[i]);
    }

    for(int i = 0; i < B->tam; i++){

        insereElem(novoConj, B->conjunto[i]);
    }

    return novoConj;
}

void insereElem(Conj* conj, int numero){

    if(pertenceConj(conj, numero)) return;
    if(conj->tam >= 100) return;

    conj->conjunto[conj->tam] = numero;
    conj->tam++;
}

void removeElem(Conj* conj, int numero){

    for(int i = 0; i < conj->tam; i++){

        if(conj->conjunto[i] == numero){

            int j = i;

            while(j != conj->tam){

                conj->conjunto[j] = conj->conjunto[j + 1];
                j++;
            }

            conj->tam--;
            return;
        }
    }
}

Conj* inter2Conj(Conj* A, Conj* B){
    
    Conj* novoConj = criaConj();

    for(int i = 0; i < B->tam; i++){

        if(pertenceConj(A, B->conjunto[i])){

            insereElem(novoConj, B->conjunto[i]);
        }
    }

    return novoConj;
}

Conj* dif2Conj(Conj* A, Conj* B){
    
    Conj* novoConj = criaConj();

    for(int i = 0; i < A->tam; i++){
        
        if(!pertenceConj(B, A->conjunto[i])){

            insereElem(novoConj, A->conjunto[i]);
        }
    }

    return novoConj;
}

bool pertenceConj(Conj* conj, int numero){

    for(int i = 0; i < conj->tam; i++){

        if(conj->conjunto[i] == numero){

            return true;
        }
    }

    return false;
}

int menorValor(Conj* conj){

    int menor = conj->conjunto[0];

    for(int i = 1; i < conj->tam; i++){

        if(menor > conj->conjunto[i]){

            menor = conj->conjunto[i];
        }
    }

    return menor;
}

int maiorValor(Conj* conj){

    int maior = conj->conjunto[0];

    for(int i = 1; i < conj->tam; i++){

        if(maior < conj->conjunto[i]){

            maior = conj->conjunto[i];
        }
    }

    return maior;
}

bool ConjIguais(Conj* A, Conj* B){

    if(A->tam != B->tam){

        return false;
    }

    for(int i = 0; i < A->tam; i++){

        if(!pertenceConj(A, B->conjunto[i])){

            return false;
        }
    }

    return true;
}

int tamanhoConj(Conj* conj){

    return conj->tam;
}

bool vazioConj(Conj* conj){

    if(conj->tam == 0) return true;

    return false;
}
