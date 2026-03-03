#include <stdio.h>
#include <math.h> // Ao usar essa biblioteca, se compila o programa com "-lm" no final.
                  // Exemplo: gcc 1.4.c -o prog1 -lm

/**
 * @brief Calcula as raízes de uma função do 2° grau (ax² + bx + c).
 * @details O cálculo é feito por meio da fórmula de báskara (-b +-raiz(△))/2a. Sendo △ = b² - 4ac
 * @param A Coeficiênte angular (deve ser =! 0).
 * @param B Coeficiênte linear.
 * @param C Termo constante.
 * @param X1 Ponteiro que armazena o valor da raiz real da equação (caso exista).
 * @param X2 Ponteiro que armazena o valor da 2° raiz real da equação (caso exista).
 * @return Número de raízes reais.
 */
int raizes(float A, float B, float C, float* X1, float* X2){

    *X1 = NAN;
    *X2 = NAN;

    if(A == 0) return -1;

    //b² - 4ac = delta
    float delta = B*B - (4 * A * C);

    if(delta < 0) return 0;
        
    else if(delta == 0){

        *X1 = -B / (2 * A);

        return 1;

    }else{

        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);

        return 2;
    }
}

int main(){

    float A = 1, B = 3, C = -4;
    float X1 = 0, X2 = 0;

    printf("Número total de raízes: %d\n",raizes(A, B, C, &X1, &X2));
    printf("X1 = %.2f\nX2 = %.2f\n", X1, X2);

    return 0;    
}