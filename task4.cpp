#include <iostream>
#include <cstdlib> // For rand(), srand()
#include <ctime>   // For time()
using namespace std;

/*
Task: Guessing Game
Description: Implement a number guessing game.Generate a random number and prompt the user to guess the number. Providehints such as "higher" or "lower" to help the user narrow down the guess.Continue until the user guesses thecorrect number.

*/

int main()
{
    int secret, guess;
    int count = 0;
    // srand ::   initializes the random number generator.
    //  time(0) returns the current system time in seconds, which keeps changing.
    //
    srand(time(0));
    secret = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "The number is between 1 and 100." << endl;
    // cout<<secret<<endl;
    // Loop until the correct guess

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        count++;
        if (guess < secret)
        {
            cout << "Too low! Try a higher number." << endl;
        }
        else if (guess > secret)
        {
            cout << "Too high! Try a lower number." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number correctly in " << count << " attempts." << endl;
            break;
        }
    }

    return 0;
}