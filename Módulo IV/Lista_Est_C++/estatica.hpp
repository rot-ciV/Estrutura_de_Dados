#pragma once

#include <iostream> 

class Lista{

private:

    int elemento[100];
    int tam;

public:

    Lista();
    ~Lista();
    bool vazioLista();
    int getTam();
    int procura(int numero);
    void insercaoOrd(int numero);
    void remocao(int numero);
    void leLista();

};