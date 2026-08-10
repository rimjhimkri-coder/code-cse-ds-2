#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "===== GUESS THE NUMBER =====" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low! Try again." << endl;
        }
        else {
            cout << "\nCorrect You got it!" << endl;
            cout << "You guessed it in "
                 << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}