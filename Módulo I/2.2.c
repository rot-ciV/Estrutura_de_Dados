#include <stdio.h>

/**
 * @brief Imprime de maneira decrescente os elementos de um vetor de forma recursiva.
 * @param vetor Ponteiro para o vetor de inteiros que será lido.
 * @param n Quantidade de elementos do vetor lido.
 */
void ImprimeDecrescente(int* vetor, int n){

    if(n <= 0){

        return;
    }

    printf("%d ",vetor[n - 1]);
    ImprimeDecrescente(vetor, n - 1);
    return;
}

int main(){

    int vetor[] = {20, 10, 5, 2, 1};
    ImprimeDecrescente(vetor, 5);
    printf("\n");

    return 0;
}