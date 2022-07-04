#include<iostream>
using namespace std;

// check even or odd number

int main()
{

    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "This is an Even number!" << endl;
    }
    else
    {
        cout << "This is an Odd number!" << endl;
    }
    
    return 0;
}