#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el número de términos de Fibonacci que desea: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, ingrese un número entero positivo." << endl;
        return 1; 
    }
    
    int* fibonacci = new int[n];

    if (n >= 1) fibonacci[0] = 0; // Primer número de Fibonacci
    if (n >= 2) fibonacci[1] = 1; // Segundo número de Fibonacci
    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]; // Sumar los dos anteriores
    }

    // Mostrar los números de Fibonacci
    cout << "Los primeros " << n << " números de Fibonacci son:" << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci[i] << " ";
    }
    cout << endl;

    // Liberar la memoria
    delete[] fibonacci;

    return 0;
}