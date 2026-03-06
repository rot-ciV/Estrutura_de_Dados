#include <stdlib.h>
#include "cubo.h"

typedef struct cubo
{
    double fAresta;  
}Cubo;

Cubo* criaCubo(){

    Cubo* cubo = malloc(sizeof(Cubo));
    cubo->fAresta = 0;
    
    return cubo;
}

void setAresta(Cubo* cubo, double aresta){

    cubo->fAresta = aresta;
}

double getAresta(Cubo* cubo){

    return cubo->fAresta;
}

double getArea(Cubo* cubo){

    return cubo->fAresta * cubo->fAresta * 6;
}

double getVolume(Cubo* cubo){

    return cubo->fAresta * cubo->fAresta * cubo->fAresta;
}