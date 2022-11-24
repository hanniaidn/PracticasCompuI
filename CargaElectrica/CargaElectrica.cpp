#include <iostream>
#include <array>
#include <string>
#include "Grupo.h"

using namespace std;

//número de grupos que va a tener la molécula
const int numGrupos = 3;

// Declaración de funciones
void PedirpH(float& ph);
Grupo CrearGrupo(int numGrupo);

template <typename grupos>
int CalcularCargaApH(float& ph, grupos todosGrupos);


int main()
{
    float phMolecula; // pH molécula
    string nombreMolecula;

    // Pedimos nombre de la molécula
    cout << "Nombre de la molecula: ";
    cin >> nombreMolecula;

    // creación del arreglo de 'Grupos' para los grupos de la molécula
    array <Grupo, numGrupos> todosGrupos;
    // Pedimos información de cada grupo al usuario
    for (int i = 0; i < numGrupos; i++)
        todosGrupos[i] = CrearGrupo(i);

    // pide indicar el pH al que está la molécula
    PedirpH(phMolecula);

    // Calcula la carga neta de la molécula a cierto pH
    int cargaMolecula = CalcularCargaApH(phMolecula, todosGrupos);
    cout << "Carga neta de la molecula: " << cargaMolecula << endl;

    // Si terminamos correctamente la ejecución del programa, regresamos 0
    return 0;
}

// Crea un nuevo 'Grupo' con la información ingresada por el usuario
Grupo CrearGrupo(int i){
    string nombreGrupo;
    float pkGrupo;
    int cargaGrupo;
    cout << "Nombre grupo " << i << ": ";
    cin >> nombreGrupo;
    cout << "pK del grupo " << nombreGrupo << ": ";
    cin >> pkGrupo;
    cout << "Carga del grupo " << nombreGrupo << " a pH mayor a " << pkGrupo << ": ";
    cin >> cargaGrupo;
    Grupo miGrupo(nombreGrupo, pkGrupo, cargaGrupo);
    return miGrupo;
}

// Solicita el valor de pH
void PedirpH(float& ph)
{
    cout << "pH de la solucion (buffer): ";
    cin >> ph;
}


//calcula y regresa la carga eléctrica de la molécula dependiendo de la carga eléctrica de cada grupo a un cierto pH.
template <typename grupos>
int CalcularCargaApH(float& ph, grupos todosGrupos)
{
    int carga = 0;
    int cargaMolecula = 0;

    for (int i = 0; i < todosGrupos.size(); i++) {

        // si pH de la solución > pka del grupo, entonces predomina la carga grupo desprotonado
        if (ph > todosGrupos[i].GetpK()){
            carga = todosGrupos[i].GetCarga();
        }

        // si pH de la solución < pka de mi grupo, entonces predomina la carga de grupo protonado
        if(ph < todosGrupos[i].GetpK()){
            carga = todosGrupos[i].GetCarga() + 1;
        }

        // la carga neta de mi molecula será igual a la suma de las cargas de cada uno de los grupos
        cargaMolecula += carga;
    }
    return cargaMolecula;
}
