#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* getting user input */

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! Your age is: " << age << endl;

    return 0;
}
