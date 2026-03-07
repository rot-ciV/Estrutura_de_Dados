#include "estatica.hpp"

int main(){

    Lista A;

    if(A.vazioLista()){

        std::cout << "Tem nada aqui nao\n";
    }

    A.insercaoOrd(10);
    A.insercaoOrd(7);
    A.insercaoOrd(13);
    A.insercaoOrd(9);
    A.insercaoOrd(2);
    A.insercaoOrd(20);

    A.leLista();

    A.remocao(9);
    A.remocao(2);
    A.remocao(99);

    A.leLista();

    std::cout << "Tamanho da lista: " << A.getTam() << "\n";
    std::cout << "O elemento " << A.procura(10) << " cotem o numero 10!\n"; 

    return 0;
}