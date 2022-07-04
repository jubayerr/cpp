#include<iostream>
using namespace std;

// print table

int main()
{
    int i, a = 2;

    // print table of 2

    for(i = 1; i <= 10; i++){
        cout << a << " X " << i << " = " << a * i << endl;
    }

    return 0;
}