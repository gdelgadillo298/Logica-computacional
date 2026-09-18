#include <iostream>

using namespace std;

int main() {
    double nota;

    cout << "Ingrese la nota (0 a 10): ";
    cin >> nota;

    
    if (nota < 0.0 || nota > 10.0) {
        cout << "Nota no valida. Debe estar entre 0 y 10." << endl;
    }
    
    else if (nota == 10.0) {
        cout << "Matricula de honor" << endl;
    }
    else if (nota >= 8.5) {
        cout << "Sobresaliente" << endl;
    }
    else if (nota >= 6.5) {
        cout << "Notable" << endl;
    }
    else if (nota >= 5.0) {
        cout << "Aprobado" << endl;
    }
    else {
        cout << "Suspenso" << endl;
    }

    return 0;
}