#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int v[2], i;
        i = 0;
        cout << "Scrie mai jos coordonatele punctului tau pentru a vedea in ce cadran se afla:" << endl;
        for(i; i<2; i++)
        {
            cout << "Coordonata nr. "<<i+1<<":";
            cin >> v[i];
        }
        if(v[0]>0 && v[1]>0)
        {
            cout << "Vectorul tau se afla in cadranul 1.\n" << endl;

        }
        if(v[0]<0 && v[1]>0)
        {
            cout << "Vectorul tau se afla in cadranul 2.\n" << endl;

        }
        if(v[0]<0 && v[1]<0)
        {
            cout << "Vectorul tau se afla in cadranul 3.\n" << endl;

        }
        if(v[0]>0 && v[1]<0)
        {
            cout << "Vectorul tau se afla in cadranul 4.\n" << endl;

        }
    }
    return 0;
}
