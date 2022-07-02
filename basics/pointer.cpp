#include<iostream>
using namespace std;

// pointer

int main()
{
    int age = 25;
    int *pAge = &age;
    double gpa = 4.5;
    double *pGpa = &gpa;
    string name = "Jonas";
    string *pName = &name;

    // print memory location

    cout << *pAge << endl;
    cout << pAge << endl;
    cout << *pGpa << endl;
    cout << pGpa << endl;
    cout << *pName << endl;
    cout << pName << endl;

    return 0; 
}