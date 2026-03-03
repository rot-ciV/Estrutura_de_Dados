#include <stdbool.h>
#include <stdlib.h>

typedef struct lista Lista;

Lista* criaLista();
bool vazioLista(Lista* lista);
int tamLista(Lista* lista);
int procura(Lista* lista, int numero);
void insercaoOrd(Lista* lista, int numero);
void remocao(Lista* lista, int numero);
