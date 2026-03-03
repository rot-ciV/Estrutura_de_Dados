#ifndef Conj_H
#define Conj_H

#include <stdbool.h>

typedef struct conj Conj;

Conj* criaConj();
Conj* unir2Conj(Conj* A, Conj* B);
void insereElem(Conj* c, int numero);
void removeElem(Conj* c, int numero);
Conj* inter2Conj(Conj* A, Conj* B);
Conj* dif2Conj(Conj* A, Conj* B);
bool pertenceConj(Conj* c, int numero);
int menorValor(Conj* c);
int maiorValor(Conj* c);
bool ConjIguais(Conj* A, Conj* B);
int tamanhoConj(Conj* c);
bool vazioConj(Conj* c);

#endif