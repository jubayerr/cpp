#include <iostream>
using namespace std;

void sayHi(string name, int age);

int main()
{
    // function

    sayHi("Jubayer", 25);

    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;
}