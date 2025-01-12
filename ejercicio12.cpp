#include <iostream>

using namespace std;

class Fibonacci {
public:
    // Método recursivo para calcular el n-ésimo número de Fibonacci
    int calcular(int n) {
        if (n <= 0) {
            return 0; // Caso base: Fibonacci(0) = 0
        } else if (n == 1) {
            return 1; // Caso base: Fibonacci(1) = 1
        } else {
            return calcular(n - 1) + calcular(n - 2); // Llamada recursiva
        }
    }
};

int main() {
    Fibonacci fib; 
    int n;

    cout << "Ingrese el valor de n para calcular el n-esimo número de Fibonacci: ";
    cin >> n;

    // Calcular y mostrar el n-ésimo número de Fibonacci
    int resultado = fib.calcular(n);
    cout << "El " << n << "-esimo número de Fibonacci es: " << resultado << endl;

    return 0;
}