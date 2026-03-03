#include <stdio.h>

/** 
 * @brief Realiza o calculo da multiplicação de dois inteiros positivos de forma recursiva.
 * @details A lógica utiliza o princípio de somas sucessivas: N * M = M + M + ... (N vezes).
 * @param M Valor que será somado.
 * @param N Número de vezes que M será somado.
 * @return Resultado da multiplicação de M por N.
 */
int MultRecursiva(int M, int N){

    if(N <= 0){

        return 0;
    }

    return M + MultRecursiva(M, N - 1);
}

int main(){

    printf("Resultado da multiplicação: %d\n", MultRecursiva(5, 100));

    return 0;
}