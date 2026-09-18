#include <iostream>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función para verificar si un número es potencia de 2
bool esPotenciaDe2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

   
    if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } 
    else if (numero >= 30) {
        cout << "El numero es 30 o mayor." << endl;
    } 
    // Casos especiales: 0 y 1
    else if (numero == 0) {
        cout << "cero" << endl;
    } 
    else if (numero == 1) {
        cout << "unidad" << endl;
    } 
    
    else {
        if (esPotenciaDe2(numero)) {
            
            cout << "El numero es una potencia de 2." << endl;
        } 
        else if (esPrimo(numero)) {
            cout << "El numero es primo." << endl;
        } 
        else {
            cout << "El numero es compuesto." << endl;
        }
    }

    return 0;
}