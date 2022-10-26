#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    int m,n,alegere, patrate, intermediar, prim, imp, div_4, n_1, m_1, rezultanta;
    while(1)
    {
        system("CLS");
        cout << "Variantele sunt:" << endl;
        cout << "1.Citire + afisare numere\n2.Patrate perfecte\n3.Nr. prime\n4.Nr. divizibile cu m si n\n5.Cmmdc\n6.Exit\n" << endl;
        cout << "Alegerea ta este:";
        cin >> alegere;
        switch(alegere)
        {
            case 1:
                cout << "Valoarea lui 'n':";
                cin >> n;
                cout << "Valoarea lui 'm':";
                cin >> m;
                cout << "Numerel tale sunt: " << n << " si " << m;
                getch();
                break;
            case 2:
                patrate = 0;
                if(n > m)
                {
                    intermediar = n;
                    n = m;
                    m = intermediar;
                }
                for(int i=n;i<=m;i++)
                {
                    if((int)sqrt(i)==sqrt(i))
                    {
                        patrate++;
                    }
                }
                cout << "Exista un nr. de " << patrate << " in intervalul lui " << n << " si " << m << endl;
                getch();
                break;
            case 3:
                prim = 0;
                if(n > m)
                {
                    intermediar = n;
                    n = m;
                    m = intermediar;
                }
                for(int i=n;i<=m;i++)
                {
                    imp = 0;
                    for(int j=1;j<=i;j++)
                    {
                        if(i%j == 0)
                        {
                            imp++;
                        }
                    }
                    if(imp == 2)
                    {
                        prim++;
                    }
                }
                cout << "Exista un nr. de " << prim << " in intervalul lui " << n << " si " << m << endl;
                getch();
                break;
            case 4:
                div_4 = 0;
                for(int i = 1000; i<=9999; i++)
                {
                    if(i % n == 0 && i % m == 0)
                    {
                        div_4++;
                    }
                }
                cout << "Valoarea nr. de 4 cifre care se divide cu " << n << " si " << m << " este de " << div_4;
                getch();
                break;
            case 5:
                if(n > m)
                {
                    intermediar = n;
                    n = m;
                    m = intermediar;
                }
                n_1 = n;
                m_1 = m;
                while(n_1 != 0)
                {
                    rezultanta = m_1 % n_1;
                    m_1 = n_1;
                    n_1 = rezultanta;
                }
                cout << "CMMDC al lui " << n << " si " << m << " este " << m_1;
                getch();
                break;
            case 6:
                exit(1);
        }
    }
    return 0;
}
