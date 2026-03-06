#include <stdio.h>

/** 
 * @brief Função recursiva que imprime os números inteiros de 1 a n em ordem crescente.
 * @param n: Último número da sequência
 */
void crescente(int n){

    if(n <= 0){

        return;
    }

    crescente(n - 1);
    printf("%d ", n);
}

/** 
 * @brief Função recursiva que imprime os números inteiros de n a 1 em ordem decrescente.
 * @param n: Primeiro número da sequência
 */
void decrescente(int n){
    
    if(n <= 0){

        return;
    }

    printf("%d ", n);
    decrescente(n - 1);
}

int main(){

    crescente(10);
    printf("\n");
    decrescente(10);
    printf("\n");

    return 0;
}