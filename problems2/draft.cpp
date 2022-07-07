#include<iostream>
using namespace std;

int main()
{
    int i, n3, n, n1 = 0, n2 = 1;

    cout << "Enter a number: ";
    cin >> n; 

    for (i = 1; i <= n; i++)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;

        cout << n3 << endl;
    }
    
    
    return 0;
}