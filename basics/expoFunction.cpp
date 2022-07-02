#include<iostream>
using namespace std;

// exponent function

int power(int baseNum, int powNum)
{
    int result = 1;

    for (int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }
    
    return result;
}

//  main function

int main()
{
    int getPowerNum = power(5, 5);

    cout << "Power number is: " << getPowerNum << endl;

    return 0;
}

// end code