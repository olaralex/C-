#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Introdu mai jos variabilele pentru combinaria de n luate cate m." << endl;
    cout << "'n' = ";

    cin >> n;

    cout << "'m' = ";

    cin >> m;

    // C(n,m) = n!/(m!*(n-m)!)

    int diferenta;

    diferenta = n-m;

    // n!

    int n_factorial;

    n_factorial = 1;

    for(int i=1;i<=n;i++)
    {
        n_factorial *= i;
    }

    // m!

    int m_factorial;

    m_factorial = 1;

    for(int i=1;i<=m;i++)
    {
        m_factorial *= i;
    }

    // diferenta!

    int diferenta_facotrial;

    diferenta_facotrial = 1;

    for(int i=1;i<=diferenta;i++)
    {
        diferenta_facotrial *= i;
    }

    // C(n,m)

    int combinari;

    combinari = n_factorial/(m_factorial*diferenta_facotrial);

    cout << "Combinari de " << n << " luate cate " << m << " este egala cu " << combinari << endl;
    return 0;
}
