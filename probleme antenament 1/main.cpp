#include <iostream>
#include <string>
#include <cstdio>
#include <conio.h>

using namespace std;

int main()
{
    while(1)
    {
        system("CLS");

        cout<<"Variantele sunt:\n";
        cout<<"1. Citire a 2 nr.\n";
        cout<<"2. Adunarea a celor 2 nr.\n";
        cout<<"3. Sacaderea celor 2 nr.\n";
        cout<<"4. Inmultirea celor 2 nr.\n";
        cout<<"5. Impartirea celor 2 nr.\n";
        cout<<"6. Iesire\n";

        int alegere;
        float a, b;

        cout << "Varianta ta este: ";
        cin >> alegere;

        if(alegere == 1)
        {
            cout << "Primul nr. este:";
            cin >> a;
            cout << "Al doilea nr. este:";
            cin >> b;
            cout << "Numerele sunt: " << a << " " << b;
            getch();
        }
        else if(alegere == 2)
        {
            float sum;
            sum = a+b;
            cout << "Suma nr. este: " << sum;
            getch();
        }
        else if(alegere == 3)
        {
            float dif;
            dif = a-b;
            cout << "Diferenta nr. este: " << dif;
            getch();
        }
        else if(alegere == 4)
        {
            float prod;
            prod = a*b;
            cout << "Produsul nr. este: " << prod;
            getch();
        }
        else if(alegere == 5)
        {
            float div;
            div = a/b;
            cout << "Impartirea nr. este: " << div;
            getch();
        }
        else if(alegere == 6)
        {
            cout << "Ai iesit din program, o zi buna!";
            break;
        }
    }
    return 0;
}
