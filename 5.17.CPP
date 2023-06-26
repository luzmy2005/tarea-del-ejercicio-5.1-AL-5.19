#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número positivo (n): ";
    cin >> n;
double suma = 0.0;
for (int i = 1; i <= n; ++i) {
        suma += 1.0 / (i * i * i);
    }
    cout <<"La suma de la serie es: " << suma << std::endl;


return 0;
}