#include <iostream>
using namespace std;
int euclideanAlgorithm(int a, int b) {
    
   if (b > a) {
        int temp = a;
        a = b;
        b = temp;
    }
int remainder;
    
   
while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;

        cout << "Nuevo par: (" << a << ", " << b << ")" << endl;
    }
    
    return a;
}
int main() {
    int mayor, menor;
    do {
cout << "Ingrese el número mayor: ";
cin >> mayor;

cout<<"Ingrese el número menor: ";
cin >> menor;

       if (mayor <= 0 || menor <= 0) {
    cout << "Los números deben ser enteros positivos. Intente nuevamente." <<endl;
        }
    } 
while (mayor <= 0 || menor <= 0);
    
    cout << "Ejecutando el algoritmo de Euclides..." <<endl;
    
    int mcd = euclideanAlgorithm(mayor, menor);
    cout <<"El máximo común divisor es: " << mcd << endl;
    
    return 0;
}