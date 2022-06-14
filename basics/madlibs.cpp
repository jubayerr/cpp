#include <iostream>
using namespace std;

int main()
{
    // build a madlibs game

    string color, pluralNoun, celebrity;

    // user input

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter a celebrity name: ";
    getline(cin, celebrity);

    // output

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}