#include <iostream>

using namespace std;

int main()
{
    int n, suma;
    suma = 0;
    cout << "Da valori lui 'n' cuprinse in intervalul [20;50):";
    cin >> n;
    while(n<20 || n>=50)
    {
        cout << "Nu ai respectat intervalul [20;50), incearca din nou..." << endl;
        cin >> n;
    }
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            suma = suma + i;
        }
        if(i%2==0)
        {
            suma = suma - i;
        }
    }
    cout << "Suma intervalului de numere de la 1 pana la " << n << " este " << suma << "." << endl;
    return 0;
}
