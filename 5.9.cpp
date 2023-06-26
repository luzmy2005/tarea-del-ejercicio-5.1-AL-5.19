#include <iostream>
using namespace std;


int main() {
    
   
int numero, invertido = 0, resto;

    do {
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;
    } 

    while (numero <= 0);
    while (numero > 0);
     {
    
        invertido = 10 + resto;
     
        numero /= 10;
     cout << "El número invertido es: " << invertido <<endl;
     system("PAUSE");
      
    return EXIT_SUCCESS;
     }
   }