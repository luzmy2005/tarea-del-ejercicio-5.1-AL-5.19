#include <cstdlib>
#include <iostream>
#include <math.h>
#define veinte 20
using namespace std;
int main(int argc, char *argv[])
{
float termino, suma = 0;
for (float i = 1; i <= veinte; i++)
{
termino = i * i/ pow(3,i);
suma += termino;
}
cout << " valor de la suma = " << suma << endl;
system("PAUSE");
return EXIT_SUCCESS;
}