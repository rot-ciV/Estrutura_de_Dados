#include <stdio.h>

/**
 * @brief Conta a quantidade de números negativos de uma array de reais.
 * @param vet Array de números reais.
 * @param n Total de elementos no array.
 * @return Contagem total de números negativos.
 */
int negativos(float *vet, int n){

    int qnt_negativos = 0;

    for(int i = 0; i < n; i++){

        if(vet[i] < 0){

            qnt_negativos++;
        }
    }

    return qnt_negativos;
}


int main(){

    int n = 0;

    printf("Digite o tamanho do vetor: \n");
    if(scanf("%d", &n) != 1) return 1;

    float vet[n];
    printf("Digite os numeros do vetor: \n");

    for(int i = 0; i < n; i++){

        scanf("%f", &vet[i]);
    }
    
    //Exibição do resultado
    printf("Numeros negativos: %d\n", negativos(vet, n));

    return 0;
}