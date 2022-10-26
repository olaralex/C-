#include <iostream>

using namespace std;

int main()
{
    double n, suma, suma_veche;
    suma = 1;
    suma_veche = 1;
    cout << "Da val. lui 'n':";
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        suma_veche = suma_veche*i;
        suma = suma + 1/suma_veche;

    }
    cout << "Suma de forma 1+1/(1*2)+1/(1*2*3)+... este:" << suma;
    return 0;
}
