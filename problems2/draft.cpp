#include<iostream>
using namespace std;

int main()
{
    int i, f, n;

    cout << "Enter a number: ";
    cin >> n; 

    for (i = 1; i < n; i++)
    {
        f = f * i;
    }
    
    cout << "!" << n << " = " << f << endl;
    
    
    return 0;
}