#include <iostream>

using namespace std;

int main()
{
    int secretNumber = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNumber != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses){
        cout << "You lose.";
    } else{
        cout << "You win.";
    }

    return 0;
}
