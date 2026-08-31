#include <stdlib.h>

typedef struct lista Lista;

Lista* criaLista();

/** 
* @brief Adiciona um novo nó ao final da lista.
* @param lista: Lista simplesmente encadeada.
* @param x: Elemento adicionado na lista.
*/
void adicionar(Lista* lista, int x);

/** 
* @brief Remove a primeira aparição do elemento requisitado da lista.
* @param lista: Lista simplesmente encadeada.
* @param x: Elemento que se deseja remover da lista.
*/
void remover(Lista* lista, int x);

/** 
* @brief Retorna o tamanho da lista.
* @param lista: Lista simplesmente encadeada.
*/
int tamanho(Lista* lista);

/** 
* @brief Verifica se a lista está vazia.
* @param lista: Lista simplesmente encadeada.
* @return Retorna 1 se a lista estiver vazia e 0 caso contrário.
*/
int estaVazia(Lista* lista);

/** 
* @brief Percorre a lista inteira destruindo nó por nó e, no final, destrói a própria lista simplesmente encadeada.
* @param lista: Lista simplesmente encadeada.
*/
void mataLista(Lista* lista);
