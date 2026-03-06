#include <stdio.h>

void PreencherVetor(int* vetor, int n){

    if(n <= 0){

        return;
    }

    PreencherVetor(vetor, n - 1);
    scanf("%d", &vetor[n - 1]);

    return;
}

void ImprimeCrescente(int* vetor, int n){

    if(n <= 0){

        return;
    }

    ImprimeCrescente(vetor, n - 1);
    printf("%d ", vetor[n - 1]);
    return;
}

void ImprimeDecrescente(int* vetor, int n){

    if(n <= 0){

        return;
    }

    printf("%d ", vetor[n - 1]);
    ImprimeDecrescente(vetor, n - 1);
    return;
}

int MaiorElemento(int* vetor, int n){

    if(n <= 0){

        return vetor[0];
    }

    int MaiorElementoAtual = MaiorElemento(vetor, n - 1);
    
    if(vetor[n - 1] > MaiorElementoAtual){

        return vetor[n - 1];
    }

    else{

        return MaiorElementoAtual;
    }
}

int main(){

    int vetor[5];
    PreencherVetor(vetor, 5);
    ImprimeCrescente(vetor, 5);
    printf("\n");
    ImprimeDecrescente(vetor, 5);
    printf("\n");

    printf("Maior elemento do vetor: %d\n", MaiorElemento(vetor, 5));

    return 0;
}


