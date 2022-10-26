#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n[100],counter,suma,media,produs,v;
    v=0;
    char alegere;
    counter = 0;
    suma = 0;
    media = 0;
    produs = 1;
    while(1)
    {
        cout << "Aceasta este o aplicatie care ia un nr. 'n' si face:" << endl;
        cout << "a) Media aritmetica a cifrelor pare;" << endl;
        cout << "b) Produsul cifrelor impare;\n" << endl;

        cout << "Cate cifre are nr. 'n':";
        cin >> v;

        cout << "Scrie nr. 'n':";
        for(int i=0;i<v; i++)
        {
            cin >> n[i];
        }

        system("CLS");

        cout << "Ce alegere vrei sa executi?" << endl;
        cin >> alegere;

        switch(alegere)
        {
            case 'a':
                for(int i=0;i<v;i++)
                {
                    if(n[i]%2==0)
                    {
                        counter = counter + 1;
                        suma = suma + n[i];
                    }
                }
                media = suma/counter;
                cout << "Media nr. pare este: " << media << endl;;
                getch();
                break;
            case 'b':
                for(int i=0;i<v;i++)
                {
                    if(n[i]%2==1)
                    {
                        produs *= n[i];
                    }
                }
                cout << "Produsul nr. impare este: " << produs << endl;
                getch();
                break;
        }
    }
    return 0;
}
