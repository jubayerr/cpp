#include<iostream>
using namespace std;

// 2d array and nested loop

int main()
{
    int numberGrid [3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // access elements
    // cout << numberGrid[1][0] << endl;

    //   nested loop

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}