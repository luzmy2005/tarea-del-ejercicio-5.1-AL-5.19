#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;
if (n <= 0) 
cout <<"La cantidad de números debe ser mayor que cero." << endl;
while (n <= 0);

int numero;
    int mayor;
    int menor;
    int suma = 0;

    cout <<"Ingrese el primer número: ";
    cin >> numero;
    mayor = menor = suma = numero;
    cin >> numero;

    mayor = menor = suma = numero;
for (int i = 1; i < n; ++i) {
    cout <<"Ingrese el número #" << i + 1 << ": ";
    cin >> numero;
if (numero > mayor) {
            mayor = numero;
        }
if (numero < menor) {
            menor = numero;
        }
        suma += numero;
        }

double media = static_cast<double>(suma) / n;

    cout <<"El número más grande es: " << mayor << std::endl;
    cout << "El número más pequeño es: " << menor << std::endl;
    cout <<"La media de los números es: " << media << std::endl;
return 0;
}