#include <iostream>
using namespace std;

bool esNumeroPerfecto(int numero) {
    
   
int sumaDivisores = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }
return sumaDivisores == numero;
}

void encontrarNumerosPerfectos(int tope) {
    cout <<"Números perfectos menores o iguales a " << tope << ":\n";
    for (int i = 1; i <= tope; i++) {
    if (esNumeroPerfecto(i)) {
        cout << i << " ";
        }
    }
    cout <<"\n";
}
int main() {
    int tope;
    cout <<"Ingrese un número entero positivo: ";
   cin >> tope;
 encontrarNumerosPerfectos(tope);

    

   
return 0;
}