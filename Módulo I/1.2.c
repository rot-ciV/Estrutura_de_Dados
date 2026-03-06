#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* @brief Encontra o maior número de um vetor.
* @param vetor: ponteiro para um array de inteiros.
* @param n: Número total de elementos do vetor.
* @return: Maior valor encontrado.
*/
int MaiorElemento(int* vetor, int n){

    int maior = vetor[0];

    for(int i = 1; i < n; i++){

        if(vetor[i] > maior){

            maior = vetor[i];
        }
    }

    return maior;
}

/*
* @brief Encontra o menor número de um vetor.
* @param vetor: ponteiro para um array de inteiros.
* @param n: Número total de elementos do vetor.
* @return: Menor valor encontrado.
*/
int MenorElemento(int* vetor, int n){

    int menor = vetor[0];

    for(int i = 1; i < n; i++){

        if(vetor[i] < menor){

            menor = vetor[i];
        }
    }

    return menor;
}

/**
 * @brief Calcula a média aritmética dos elementos de um vetor.
 * @param vetor ponteiro para um array de inteiros.
 * @param n Número total de elementos do vetor.
 * @return A média dos elementos em float.
 */
float MediaElemento(int* vetor, int n){

    int soma = 0;

    for(int i = 0; i < n; i++){

        soma += vetor[i];
    }

    return soma / n;
}


int main(){

    srand(time(NULL));

    int n = 0;
    printf("Digite o tamanho dos vetores: \n");
    if(scanf("%d", &n) != 1) return 1;

    int vetor_1[n];
    int vetor_2[n];

    for(int i = 0; i < n; i++){

        vetor_1[i] = rand() % 100;
        vetor_2[i] = rand() % 100;
    }

    printf("Maior elemento do vetor 1: %d\n", MaiorElemento(vetor_1, n));
    printf("Maior elemento do vetor 2: %d\n\n", MaiorElemento(vetor_2, n));

    printf("Menor elemento do vetor 1: %d\n", MenorElemento(vetor_1, n));
    printf("Menor elemento do vetor 2: %d\n\n", MenorElemento(vetor_2, n));

    printf("Média dos elementos do vetor 1: %.2f\n", MediaElemento(vetor_1, n));
    printf("Média dos elementos do vetor 2: %.2f\n\n", MediaElemento(vetor_2, n));

    return 0;
}