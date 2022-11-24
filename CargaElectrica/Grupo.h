//
// Created by Hannia Domínguez on 23/11/2022.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H

#include <string>

using namespace std;

class Grupo {
  
  public:
    //serán constructores
    Grupo(string, float, int);
    Grupo();

    //funciones
    int GetCarga();
    float GetpK();
  
private:
    string nombre;
    float pka;
    int carga;


};


#endif //CARGAELECTRICA_GRUPO_H
