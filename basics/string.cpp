#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string mySub = "Psychology";

    cout << mySub[0];
    cout << mySub[1];
    cout << mySub[2];
    cout << mySub[3];
    cout << mySub[4];
    cout << mySub[5];
    cout << mySub[6];
    cout << mySub[7];
    cout << mySub[8];
    cout << mySub[9];

    cout << "" << endl;

    cout << mySub.find("s", 0) << endl;

    cout << mySub.substr(4, 5) << endl;

    return 0;
}
