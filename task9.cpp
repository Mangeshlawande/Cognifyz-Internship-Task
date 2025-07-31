

/*
Task: Rock-Paper-Scissors Game Description:
Implement a simple rock-paper-scissors game.
Prompt the user to choose eitherrock, paper, or scissors, and generate a randomchoice for the computer. Determine the winner based on the game rules and display the result.
Skills: Random number generation, user input,conditional statements.

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char user, computer;
    int randNum;

    // Seed for random number
    srand(time(0));
    randNum = rand() % 3; // 0 = rock, 1 = paper, 2 = scissors

    if (randNum == 0)
        computer = 'r';
    else if (randNum == 1)
        computer = 'p';
    else
        computer = 's';

    //  user input
    cout << "Enter your choice (r for rock, p for paper, s for scissors): \n";
    cin >> user;

    // Display computer choice
    cout << "Computer chose: " << computer << endl;

    // Determine winner
    if (user == computer)
    {
        cout << "It's a tie!" << endl;
    }
    else if ((user == 'r' && computer == 's') ||
             (user == 'p' && computer == 'r') ||
             (user == 's' && computer == 'p'))
    {
        cout << "You win!" << endl;
    }
    else if ((user == 'r' || user == 'p' || user == 's'))
    {
        cout << "Computer wins!" << endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
