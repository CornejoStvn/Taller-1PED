#include <iostream>

using namespace std;

union Numero {
    int entero;          
    unsigned char bytes[sizeof(int)]; 
};

int main() {
    Numero num; 

    
    cout << "Ingrese un número entero: ";
    cin >> num.entero;

    cout << "Representación en bytes del número " << num.entero << ":\n";
    for (size_t i = 0; i < sizeof(int); i++) {
        cout << "Byte " << i << ": " << static_cast<int>(num.bytes[i]) << endl;
    }

    return 0;
}