/*
Implemente un programa que imprima solicite por teclado un numero n e imprima los n primeros primos.
Si ingresa 20
Debe imprimir: 2 3 5 7 11 13 17 19
Un numero es primo si es divisible únicamente entre 1 y el mismo numero.
*/
#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";cin >> n;

    int contador = 0;
    int numero = 2;
    while (contador < n) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    return 0;
}
