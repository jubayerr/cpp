#include <iostream>
using namespace std;
int main()
{
    // Arrays

    int luckyNumbs[20] = {4, 8, 12, 15, 16};

    luckyNumbs[10] = 50;

    cout << luckyNumbs[0] << endl;
    cout << luckyNumbs[10] << endl;

    return 0;
}