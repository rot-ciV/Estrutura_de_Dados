#pragma once

class Cubo{

public:

    Cubo();
    ~Cubo();
    void setAresta(double aresta);
    double getAresta();
    double getArea();
    double getVolume();

private:

    double fAresta;
};