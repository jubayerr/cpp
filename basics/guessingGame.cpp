#include<iostream>
using namespace std;

// building a guessing game 

int main()
{
    // variables

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    // loop

    while (secretNum != guess && !outOfGuesses)
    {
        if (guessCount < guessLimit)
        {
            cout << "Guess a number between 1 to 9: ";
            cin >> guess;
            guessCount++;
        } 
        else 
        {
            outOfGuesses = true;
        }
    }

    // output

    if (outOfGuesses)
    {
        cout << "You lose!" << endl;
    }
    else 
    {
        cout << "You win!" << endl;
    }

    return 0;
}

// end code