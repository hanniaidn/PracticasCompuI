/*Author: Hannia Isela Domínguez Núñez
 * 28/09/22
 * Práctica 3: Calculadora
 */
#include <iostream>
using namespace std;
float num1;
float num2;
float resultado;
char operador;

int main() {
    cout << "Bienvenide :D" << endl;
    cout << "Este programa hace operaciones basicas entre dos numeros."<<endl;
    cout << "Primer numero: " << endl;
    cin >> num1;
    cout << "Operacion: " << endl;
    cin >> operador;
    cout << "Segundo numero: " <<  endl;
    cin >> num2;
    if (operador == '+') {
        resultado = num1+num2;
        cout<< "Resultado: \n" << num1 << operador << num2 << "=" << resultado << endl;
    }
    if (operador == '-') {
        resultado = num1-num2;
        cout<< "Resultado: \n" << num1 << operador << num2 << "=" << resultado << endl;
    }
    if (operador == '*') {
        resultado = num1*num2;
        cout<< "Resultado: \n" << num1 << operador << num2 << "=" << resultado << endl;
    }
    if (operador == '/') {
        resultado = num1/num2;
        cout<< "Resultado: \n" << num1 << operador << num2 << "=" << resultado << endl;
    }
    if (operador == '%') {
        resultado = num1%num2;
        cout<< "Resultado: \n" << num1 << operador << num2 << "=" << resultado << endl;
    }

    return 0;
}
