#include <iostream>

using namespace std;

int main()
{
    int n, n_binar[32], i, n_prim;

    i = 0;

    cout << "Da val lui 'n': ";

    cin >> n;

    n_prim = n;

    if(n<0)
    {
        n = -n;
    }

    while(n>0)
    {
       n_binar[i] = n % 2;
       n = n/2;
       i++;
    }

    if(n_prim<0)
    {
        n_binar[i+1] = 1;
    }

    cout << "Nr. ales de tine in binar este: ";

    for(int j=i-1;j>=0;j--)
    {
        cout << n_binar[j];
    }

    return 0;
}
