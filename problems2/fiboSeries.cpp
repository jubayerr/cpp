#include<iostream>
using namespace std;

// fibonacci series

int main()
{
    int n, n1 = 0, n2 = 1, n3, i;

     cout << "Enter a number upto you want to iterate: ";
     cin >> n;

    cout << n1 << endl;
    cout << n2 << endl;

    for ( i = 1; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << endl;
    }
    

    return 0;
}