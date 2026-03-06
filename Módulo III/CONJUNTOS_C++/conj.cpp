#include "conj.hpp"

Conj::Conj(){

    tam = 0;
}

Conj::~Conj(){}

void Conj::insereElem(int numero){

    if(tam >= 100) return;
    if(pertenceConj(numero)) return;

    conjunto[tam] = numero;
    tam++;
}

bool Conj::pertenceConj(int numero){

    for(int i = 0; i < tam; i++){

        if(conjunto[i] == numero){

            return true;
        }
    }

    return false;
}

void Conj::removeElem(int numero){

    for(int i = 0; i < tam; i++){

        if(conjunto[i] == numero){

            for(int j = i; j < tam - 1; j++){

                conjunto[j] = conjunto[j + 1];
            }

            tam--;
            return;
        }
    }
}

Conj* Conj::unir2Conj(Conj* convidado){

    Conj* novoConj = new Conj();

    for(int i = 0; i < tam; i++){

        novoConj->insereElem(conjunto[i]);
    }

    for(int i = 0; i < convidado->tam; i++){

        novoConj->insereElem(convidado->conjunto[i]);
    }

    return novoConj;
}

Conj* Conj::inter2Conj(Conj* convidado){

    Conj* novoConj = new Conj();

    for(int i = 0; i < tam; i++){
        
        if(pertenceConj(convidado->conjunto[i])){

            novoConj->insereElem(convidado->conjunto[i]);
        }
    }

    return novoConj;
}

bool Conj::ConjIguais(Conj* convidado){

    if(tam != convidado->tam) return false;

    for(int i = 0; i < convidado->tam; i++){

        if(!pertenceConj(convidado->conjunto[i])) return false;
    }

    return true;
}

int Conj::maiorValor(){

    int maior = conjunto[0];

    for(int i = 1; i < tam; i++){

        if(conjunto[i] > maior){

            maior = conjunto[i];
        }
    }

    return maior;
}

int Conj::menorValor(){

    int menor = conjunto[0];

    for(int i = 1; i < tam; i++){

        if(conjunto[i] < menor){

            menor = conjunto[i];
        }
    }

    return menor;
}

int Conj::tamanhoConj(){

    return tam;
}

bool Conj::vazioConj(){

    if(tam == 0) return true;
    return false;
}

Conj* Conj::dif2Conj(Conj* convidado){

    Conj* novoConj = new Conj();

    for(int i = 0; i < tam; i++){

        if(!convidado->pertenceConj(conjunto[i])){

            novoConj->insereElem(conjunto[i]);
        }
    }

    return novoConj;
}

void Conj::imprimeConj(){

    std::cout << "O conjunto é formado por: {";

    for(int i = 0; i < tam; i++){

        std::cout << conjunto[i] << " ";
    }

    std::cout << "}\n";
}