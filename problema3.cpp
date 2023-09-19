/*
Implemente un programa que imprima los n números de la secuencia de Fibonacci
1 1 2 3 5 8 13 21 .....
*/

#include <iostream>

using namespace std;

void imprimirFibonacci(int n) {
    int primero = 0, segundo = 1, siguiente;

    cout << "Secuencia de Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        cout << primero << " ";
        siguiente = primero + segundo;
        primero = segundo;
        segundo = siguiente;
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros de Fibonacci a imprimir: ";cin >> n;

    imprimirFibonacci(n);

    return 0;
}