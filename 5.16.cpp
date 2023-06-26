#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
char car, Comienzo = 'C';
for (Comienzo = 'C'; Comienzo >= 'R'; Comienzo --)
{
for ( car = Comienzo; car >= 'R'; car--)
cout <<car << ' ';
cout << endl;
}
system("PAUSE");

return EXIT_SUCCESS;
}
