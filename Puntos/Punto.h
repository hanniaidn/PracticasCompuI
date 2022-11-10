
//
// Created by Hannia Domínguez on 11/8/2022.
//

#ifndef PUNTO_PUNTO_H
#define PUNTO_PUNTO_H
#include <vector>

using namespace std;

class Punto2D {
public:
    Punto2D();
    void SetPosicion(float x, float y);
    void Trasladar(float t1, float t2);
    void RotarRespectoAlOrigen(float t1);
    void Escalar(float t1, float t2);
    float GetX();
    float GetY();

private:
    float a, b, c;
};



#endif //PUNTO_PUNTO_H
