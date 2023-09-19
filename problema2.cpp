/*

Implemente un programa que imprima los n números perfectos.
*/

#include <iostream>
using namespace std;

bool esNumeroPerfecto(int num) {
    int sumaDivisores = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores == num;
}

void imprimirNumerosPerfectos(int n) {
    int contador = 0;
    int num = 2;
    while (contador < n) {
        if (esNumeroPerfecto(num)) {
            cout << num << " ";
            contador++;
        }
        num++;
    }
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";cin >> n;
    
    cout << "Los primeros " << n << " números perfectos son: ";imprimirNumerosPerfectos(n);
    
    return 0;
}