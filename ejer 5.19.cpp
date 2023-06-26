#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero) {
if (numero <= 1) {
        return false;
    }
for (int contador = 2; contador * contador <= numero; contador++) {
        if (numero % contador == 0) {
            return false;
        }
    }

    return true;
}

int main() {
int numero;

    do {
cout << "Ingrese un número natural mayor o igual que 2: ";
cin >> numero;
    } 
while (numero < 2);
if (esPrimo(numero)) {
cout << numero <<" es un número primo." <<endl;
    } else {
cout << numero << " no es un número primo." <<endl;
    }

return 0;
}