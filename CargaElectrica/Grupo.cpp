//
// Created by Hannia Domínguez on 23/11/2022.
//

#include "Grupo.h"

Grupo::Grupo() {
    nombre = " ";
    pka = 0;
    carga = 0;
}

Grupo::Grupo(string nombreGrupo, float pkGrupo, int cargaGrupo) {
    nombre = nombreGrupo;
    pka = pkGrupo;
    carga = cargaGrupo;
}

//regresa el valor de la carga de cada grupo de la molécula
int Grupo::GetCarga() {
    return carga;
}

//regresa el valor de pka de cada grupo de la molécula
float Grupo::GetpK() {
    return pka;
}
