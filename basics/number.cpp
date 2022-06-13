#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    /* working with numbers */

    cout << 50 << endl;
    cout << 50 + 5 << endl;
    cout << 65 - 5 << endl;
    cout << 40 + 5 * 10 << endl;
    cout << (40 + 5) * 10 << endl;

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    dnum--;

    wnum += 80;
    dnum *= 15;

    cout << wnum << endl;
    cout << dnum << endl;

    cout << 9 + 5.5 << endl;

    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;

    cout << pow(2, 5) << endl;

    cout << sqrt(36) << endl;

    cout << round(4.2) << endl;
    cout << round(4.7) << endl;
    cout << round(4.5) << endl;

    cout << floor(4.8) << endl;

    cout << fmax(5, 8) << endl;
    cout << fmin(5, 8) << endl;

    return 0;
}
