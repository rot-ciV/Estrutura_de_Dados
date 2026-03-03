#ifndef CUBO_H
#define CUBO_H

typedef struct cubo Cubo;

Cubo* criaCubo();

void setAresta(Cubo* cubo, double aresta);
double getAresta(Cubo* cubo);

double getArea(Cubo* cubo);
double getVolume(Cubo* cubo);

#endif