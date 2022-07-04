#include<iostream>
using namespace std;

// swaping of two number without third variable

int main()
{
    int a, b;

    cout << "enter first number: ";
    cin >> a; 
    
    cout << "enter second number: ";
    cin >> b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "A = " << a << " B = " << b << endl;

    return 0;
}