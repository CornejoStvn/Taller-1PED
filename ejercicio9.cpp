#include <iostream>

using namespace std;

int main() {
    int cantidad;
    float *numeros; 
    float suma = 0.0;

    cout << "Ingrese la cantidad de números que desea ingresar: ";
    cin >> cantidad;

    // Reservar memoria dinamica
    numeros = new float[cantidad];

    if (numeros == nullptr) {
        cout << "Error al reservar memoria." << endl;
        return 1; 
    }

    // Solicitar los números al usuario
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i]; // Sumar el número ingresado a la suma total
    }

    float promedio = suma / cantidad;

    cout << "El promedio de los números ingresados es: " << promedio << endl;

    delete[] numeros;

    return 0;
}