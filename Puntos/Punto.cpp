
//
// Created by Hannia Domínguez on 11/8/2022.
//
#include <iostream>
#include <math.h>
#define PI 3.14159265
#include "Punto.h"

using namespace std;

Punto2D::Punto2D() {
    a = 0;
    b = 0;
    c = 0;
}

void Punto2D::SetPosicion(float x,float y){
    a = x;
    b = y;
}

void Punto2D::Trasladar(float t1, float t2) {
    a = a + t1;
    b = b + t2;
}

void Punto2D::RotarRespectoAlOrigen(float t1){
    c = a;
    a = c*cos(t1*PI/180) - b*sin(t1*PI/180);
    b = c*sin(t1*PI/180) + b*cos(t1*PI/180);
}

void Punto2D::Escalar(float t1, float t2) {
    a = a*t1;
    b = b*t2;
}

float Punto2D::GetX() {
    return a;
}

float Punto2D::GetY() {
    return b;
}
