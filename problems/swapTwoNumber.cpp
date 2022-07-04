#include<iostream>
using namespace std;

// swap two number

int main()
{
    int a, b, c;

    cout << "A = ";
    cin >> a;
    
    cout << "B = ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "A = " << a << " B = " << b << endl;

    return 0;
}