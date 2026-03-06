#include "LSE.hpp"

Lista::Lista(){

    tam = 0;
}

Lista::~Lista(){}

bool Lista::vazioLista(){

    if(tam == 0) return true;
    return false;
}

int Lista::getTam(){

    return tam;
}

void Lista::insercaoOrd(int numero){

    if(tam == 0){

        elemento[0] = numero;
        tam++;
        return;
    }

    if(tam >= 100) return;

    for(int i = tam - 1; i >= 0; i--){

        if(numero >= elemento[i]){

            elemento[i + 1] = numero;
            tam++;
            return;
        }

        elemento[i + 1] = elemento[i];
    }

    elemento[0] = numero;
    tam++;
    return;
}

int Lista::procura(int numero){

    if(vazioLista()) return -1;

    for(int i = 0; i < tam; i++){

        if(numero == elemento[i]){

            return i;
        }
    }

    return -1;
}

void Lista::remocao(int numero){

    if(vazioLista()) return;

    int i = procura(numero);

    if(i == -1) return;

    while(i < tam - 1){

        elemento[i] = elemento[i + 1];
        i++;
    }

    tam--;
    return;
}

void Lista::leLista(){

    std::cout << "{";

    for(int i = 0; i < tam; i++){

        std::cout << elemento[i] << " ";
    }

    std::cout << "}\n";
}
