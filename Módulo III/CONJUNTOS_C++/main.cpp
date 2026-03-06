#include <iostream> 
#include "conj.hpp"

// Compilar o código: g++ main.cpp conj.cpp -o prog1

int main(){

    Conj A, B;
    Conj* teste;

    A.insereElem(2);
    A.insereElem(3);
    A.insereElem(4);

    B.insereElem(2);
    B.insereElem(3);

    if(A.vazioConj()){

        std::cout <<"Tem nada aqui.\n";

    }else{

        std::cout << "Maior elemento do conjunto: " << A.maiorValor() << std::endl;
        std::cout << "Menor elemento do conjunto: " << A.menorValor() << std::endl;
    }

    A.imprimeConj();
    B.imprimeConj();

    teste = A.dif2Conj(&B);

    teste->imprimeConj();
    teste->removeElem(4);
    teste->imprimeConj();
    delete teste;
    
    return 0;
}
