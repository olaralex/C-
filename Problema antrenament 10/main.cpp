#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <type_traits>
#include <vector>
#include <iterator>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    // VARIABILELE PENTRU 6/49 SAU 5/40
    int a, b;

    a = 1;
    b = 2;

    // ALEGEREA JOCULUI SI VARIANTELE PENTRU MENIUL JOCULUI
    int alegere, variante;

    // VECTORII PENTRU ALEGEREA NUMERELOR
    int v_1[6],v_2[5];

    // VARIABILELE PENTRU NUMERELE RANDOM
    int random_1[49], random_2[40];
    int rand_1, rand_2;

    cout << "LOTO" << endl;
    cout << endl;
    cout << "Apasa 'ENTER' pentru a continua..." << endl;

    cin.ignore();

    system("CLS");

    cout << "Jocurile sunt:" << endl;
    cout << "6/49 (1) sau 5/40 (2)" << endl;
    cout << endl;
    cout << "Alegerea ta este (nr. corespunzator):";

    cin >> alegere;

    while(alegere != a && alegere != b)
    {
        system("CLS");

        cout << "Alegere Invailda" << endl;
        cout << "Mai incearca" << endl;
        cout << endl;
        cout << "Alegerea ta este:";

        cin >> alegere;
    }

    if(alegere == a)
    {
        while(1)
        {
            system("CLS");

            cout << "Variantele pentru 6/49 sunt:" << endl;
            cout << "1.Cumparare bilet (alegere numere)\n2.Extragere numere\n3.Rezultat\n4.Exit\n" << endl;
            cout << "Varianta ta este:";

            cin >> variante;

            switch(variante)
            {
                case 1:
                    cout << "Scrie mai jos nr pe care vrei sa le alegi pentru acest joc!" << endl;

                    for(int i=0;i<6;i++)
                    {
                        cout << "Nr. " << i+1 << ": ";

                        cin >> v_1[i];
                    }

                    cout << endl;
                    cout << "Nr. alese de tine sunt: ";

                    for(int i=0;i<6;i++)
                    {
                        cout << v_1[i] << " ";
                    }
                    getch();
                    break;
                case 2:
                    rand_1 = rand() % 100;
                    random_1.push_back(rand_1);
                    cout << random_1;
                    getch();
                    break;
                case 3:

                    getch();
                    break;
                case 4:
                    exit(1);
            }
        }
    }
    if(alegere == b)
    {
        while(1)
        {
            system("CLS");

            cout << "Variantele pentru 5/40 sunt:" << endl;
            cout << "1.Cumparare bilet (alegere numere)\n2.Extragere numere\n3.Rezultat\n4.Exit\n" << endl;
            cout << "Varianta ta este:";

            cin >> variante;

            switch(variante)
            {
                case 1:
                    cout << "Scrie mai jos nr pe care vrei sa le alegi pentru acest joc!" << endl;

                    for(int i=0;i<5;i++)
                    {
                        cout << "Nr. " << i+1 << ": ";

                        cin >> v_2[i];
                    }

                    cout << endl;
                    cout << "Nr. alese de tine sunt: ";

                    for(int i=0;i<5;i++)
                    {
                        cout << v_2[i] << " ";
                    }
                    getch();
                    break;
                case 2:

                    getch();
                    break;
                case 3:

                    getch();
                    break;
                case 4:
                    exit(1);
            }
        }
    }
    return 0;
}
