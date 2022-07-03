#include <iostream>
#include <iomanip>
using namespace std;

// area of circle

int main()
{
    double pi = 3.14159;

    double R;

    cin >> R;

    double A = pi * (R * R);

    cout << fixed << setprecision(4) << "A=" << A << endl;
    
    return 0;
}