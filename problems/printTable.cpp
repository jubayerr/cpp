#include<iostream>
using namespace std;

// print table

int main()
{
    int i;

    cout << "print table of 2" << endl;

    for(i = 2; i <= 20; i+=2){
        cout << i << endl;
    }

    // print table of 3

    cout << "print table of 3" << endl;

    for(i = 3; i <= 30; i+=3){
        cout << i << endl;
    }

    // print table of 5

    cout << "print table of 5" << endl;

    for(i = 5; i <= 50; i+=5){
        cout << i << endl;
    }

    return 0;
}