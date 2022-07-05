#include<iostream>
using namespace std;

// factorial

int main()
{
    int n, i, f;

    cout << "Enter a number: ";
    cin >> n;
    f = n;

    for ( i = 1; i < n; i++)
    {
        f = f*i;
    }
    cout << "Factorial of " << n << " = " << f << endl;

    return 0;
}