#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
   
double x;
    cout <<"Ingrese el valor de x: ";
    cin >> x;
double aproximado = 1.0; 
    double termino = 1.0;

    cout <<"Sumas parciales de la serie para x = " << x << ":\n";
    cout <<"Suma 0: " << aproximado << endl;
    for (int i = 1; i <= 15; i++) {
        termino *= (x / i); 
        aproximado += termino; 
        cout << "Suma " << i << ": " << aproximado <<endl;
    }

double valorReal = std::exp(x);
cout <<"Valor real de e^x: " << valorReal <<endl;
return 0;
}