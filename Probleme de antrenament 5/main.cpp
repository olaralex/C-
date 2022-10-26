#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char alegere;
    int v[100],n, minim, maxim, gasit, element, vector_stationar, i, a, b, counter;
    bool verif;
    while(1)
    {
        system("CLS");
        cout << "Vatiantele sunt:" << endl;
        cout << "c. Citire" << endl;
        cout << "a. Afisare" << endl;
        cout << "m. Det. val. minime din vector" << endl;
        cout << "M. Dte. val maxime din vector" << endl;
        cout << "f. Cautarea unei valori date in vector" << endl;
        cout << "g. Numararea val. dintr-un intrval [a,b)" << endl;
        cout << "i. Inserarea unui nou el. in vector" << endl;
        cout << "s. Sortarea vectorului" << endl;
        cout << "x. Iesire" << endl;
        cout << "Alegerea ta este:";
        cin >> alegere;
        switch(alegere)
        {
            case 'c':
                cout << "Cate valori vrei sa aiba vectorul?" << endl;
                cin >> n;
                for(i=0;i<n;i++)
                {
                    cout << "Vectorul de pozitia " << i+1 << " este:";
                    cin >> v[i];
                }
                getch();
                break;
            case 'a':
                cout << "Vectorul este:";
                for(i=0;i<n;i++)
                {
                    cout << v[i];
                }
                getch();
                break;
            case 'm':
                for(i=0;i<n;i++)
                {
                    if(v[i]<v[i-1])
                    {
                        minim = v[i];
                    }
                }
                cout << "Minimul dintre elemente este:" << minim << endl;
                getch();
                break;
            case 'M':
                for(i=0;i<n;i++)
                {
                    if(v[i]>v[i-1])
                    {
                        maxim = v[i];
                    }
                }
                cout << "Maximul dintre elemente este:" << maxim << endl;
                getch();
                break;
            case 'f':
                cout << "Numeste elementul cautat:";
                cin >> gasit;
                for(i=0;i<n;i++)
                {
                    if(v[i] == gasit)
                    {
                        verif = true;
                    }
                    else
                    {
                        verif = false;
                    }
                }
                if(verif == true)
                {
                    cout << "Elementul cautat se afla in vector." << endl;
                }
                else
                {
                    cout << "Elementul cautat NU se afla in vector." << endl;
                }
                getch();
                break;
            case 'g':
                counter = 0;
                cout << "Val. lui 'a':";
                cin >> a;
                cout << "Val. lui 'b':";
                cin >> b;
                for(i=0;i>n;i++)
                {
                    if(a != v[i] || b != v[i])
                    {
                        cout << "Parametrii nu sunt in vector..." << endl;
                        break;
                    }
                }
                for(i=0;i>n;i++)
                {
                    if(v[i] == a)
                    {
                        counter = counter + 1;
                    }
                    else if(v[i] != b && counter != 0)
                    {
                        counter = counter + 1;
                    }
                    else if(v[i] == b)
                    {
                        break;
                    }
                }
                cout << "Sunt " << counter << " numere in acest interval." << endl;
                getch();
                break;
            case 'i':
                cout << "Scrie elementul pe care vrei sa il introduci in vector:";
                cin >> element;
                n += 1;
                v[n-1] = element;
                cout << "Apasa 'a' pentru a vedea noul vector!" << endl;
                getch();
                break;
            case 's':
                for(i=0;i<n;i++)
                {
                    if(v[i+1] < v[i])
                    {
                       vector_stationar = v[i+1];
                       v[i+1] = v[i];
                       v[i] = vector_stationar;
                    }
                }
                cout << "Vectorul a fost sortat! apasa 'a' pentru a vedea noul vector sortat." << endl;
                getch();
                break;
            case 'x':
                exit(1);
        }
    }
    return 0;
}
