#include <stdio.h>

/** 
 * @brief Função recursiva que soma números inteiros de um intervalo.
 * @param inicio: Primeiro número inteiro de um intervalo.
 * @param fim: Último número inteiro de um intervalo.
 * @return A soma total do intervalo.
 */
int SomaIntervalo(int inicio, int fim){

    if(inicio == fim){

        return fim;
    }

    return fim + SomaIntervalo(inicio, fim - 1);
}


int main(){

    printf("Soma: %d\n", SomaIntervalo(1, 5));

    return 0;
}