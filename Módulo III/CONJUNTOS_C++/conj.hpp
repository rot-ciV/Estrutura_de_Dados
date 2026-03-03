#pragma once

#include <iostream> 

class Conj {

private:
    
    int conjunto[100];
    int tam;

public:

    Conj(); 
    ~Conj();
    Conj* unir2Conj(Conj* convidado); 
    void insereElem(int numero); 
    void removeElem(int numero); 
    Conj* inter2Conj(Conj* convidado); 
    Conj* dif2Conj(Conj* convidado);
    bool pertenceConj(int numero); 
    int menorValor(); 
    int maiorValor(); 
    bool ConjIguais(Conj* convidado); 
    int tamanhoConj();
    bool vazioConj();

    void imprimeConj(); //Função adicional
};


