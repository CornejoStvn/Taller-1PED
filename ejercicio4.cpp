#include <iostream>

using namespace std;

union Dato {
    int entero;
    char caracter;
    float flotante;
};

void mostrarDato(Dato d, int tipo) {
    switch (tipo) {
        case 1:
            cout << "El número entero es: " << d.entero << endl;
            break;
        case 2:
            cout << "El carácter es: " << d.caracter << endl;
            break;
        case 3:
            cout << "El número flotante es: " << d.flotante << endl;
            break;
        default:
            cout << "Tipo de dato no válido." << endl;
    }
}

int main() {
    Dato dato;
    int tipo;

    cout << "Seleccione el tipo de dato que desea almacenar:" << endl;
    cout << "1. Entero" << endl;
    cout << "2. Carácter" << endl;
    cout << "3. Flotante" << endl;
    cout << "Ingrese su opción (1-3): ";
    cin >> tipo;

    switch (tipo) {
        case 1:
            cout << "Ingrese un número entero: ";
            cin >> dato.entero;
            break;
        case 2:
            cout << "Ingrese un carácter: ";
            cin >> dato.caracter;
            break;
        case 3:
            cout << "Ingrese un número flotante: ";
            cin >> dato.flotante;
            break;
        default:
            cout << "Opción no válida." << endl;
            return 1;
    }

    // Mostrar el dato almacenado
    mostrarDato(dato, tipo);

    return 0;
}