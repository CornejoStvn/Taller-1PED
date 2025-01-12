#include <iostream>

using namespace std;

class Numero {
private:
    int valor; 

public:
    Numero(int v) : valor(v) {}

    bool esPrimo() {
        if (valor <= 1) return false; // 0 y 1 no son primos
        for (int i = 2; i * i <= valor; i++) {
            if (valor % i == 0) {
                return false; 
            }
        }
        return true; 
    }

    int getValor() {
        return valor;
    }
};

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    Numero num(numero);

    // Verificar si el número es primo y mostrar el resultado
    if (num.esPrimo()) {
        cout << "El número " << num.getValor() << " es primo." << endl;
    } else {
        cout << "El número " << num.getValor() << " no es primo." << endl;
    }

    return 0;
}