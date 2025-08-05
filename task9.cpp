

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
    int choice = 1;
    while (choice)
    {

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

        cout << "Enter 1 to Continue. \n";
        cout << "Enter 0 for Exit. \n";
        cin >> choice;
    }

    return 0;
}
/*
g++ task9.cpp && ./a.out
output :


Enter your choice (r for rock, p for paper, s for scissors):
r
Computer chose: p
Computer wins!
Enter 1 to Continue.
Enter 0 for Exit.
1
Enter your choice (r for rock, p for paper, s for scissors):
s
Computer chose: r
Computer wins!
Enter 1 to Continue.
Enter 0 for Exit.
1
Enter your choice (r for rock, p for paper, s for scissors):
s
Computer chose: s
It's a tie!
Enter 1 to Continue.
Enter 0 for Exit.
1
Enter your choice (r for rock, p for paper, s for scissors):
r
Computer chose: s
You win!
Enter 1 to Continue.
Enter 0 for Exit.

*/