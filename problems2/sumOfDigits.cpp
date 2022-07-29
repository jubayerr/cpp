#include<iostream>
using namespace std;

// sum of digit of numbers

int main()
{
    int n, r, sum = 0;

    cout << "Enter a number: ";

    cin >> n;

    while(n!=0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    cout << "Sum is " << sum << endl;

    return 0;
}