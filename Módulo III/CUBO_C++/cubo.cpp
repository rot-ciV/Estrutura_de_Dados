#include "cubo.hpp"

Cubo::Cubo(){

    fAresta = 0;
}

Cubo::~Cubo(){}

void Cubo::setAresta(double aresta){

    fAresta = aresta;
}

double Cubo::getAresta(){

    return fAresta;
}

double Cubo::getArea(){

    return fAresta*fAresta*6;
}
double Cubo::getVolume(){

    return fAresta*fAresta*fAresta;
}