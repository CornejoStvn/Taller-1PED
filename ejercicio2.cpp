#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    const int NUM_ESTUDIANTES = 5; 
    Estudiante estudiantes[NUM_ESTUDIANTES]; 

    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Ingrese los datos del estudiante " << (i + 1) << ":" << endl;
        
        cout << "Nombre: ";
        cin.ignore(); 
        getline(cin, estudiantes[i].nombre); 
        
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        
        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;

        cout << endl; 
    }

    cout << "Datos de los estudiantes ingresados:" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Estudiante " << (i + 1) << ":" << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << endl; 
    }

    return 0;
}