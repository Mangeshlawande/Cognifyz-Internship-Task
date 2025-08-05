#include <iostream>
using namespace std;

/*
Task: Fibonacci Series
Description:
Implement a program that generates
the Fibonacci series up to a given
number of terms. Prompt the user to
enter the number of terms and display
the series.
Skills: Loops, basic arithmetic
operations

*/

void fibonacci(int num)
{
    int i, j, a = -1, b = 1, sum = 0;

    for (i = 0; i < num; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d  ", sum);
    }
    cout << endl;
}

int main()
{
    int choice = 1;
    while (choice)
    {
        int range;
        cout << "Enter the range for fibonacci series :: \n";
        cin >> range;
        if (range < 0)
        {
            cout << "Please,Enter positive range.\n";
        }
        fibonacci(range);

        cout << "Enter 0 for Exit.\n";
        cout << "Enter 1 to Continue.\n";
        cin >> choice;
    }
    return 0;
};

/**
output :

Enter the range for fibonacci series ::
5
0  1  1  2  3
Enter 0 for Exit.
Enter 1 to Continue.
1
Enter the range for fibonacci series ::
7
0  1  1  2  3  5  8
Enter 0 for Exit.
Enter 1 to Continue.
1
Enter the range for fibonacci series ::
11
0  1  1  2  3  5  8  13  21  34  55
Enter 0 for Exit.
Enter 1 to Continue.
1
Enter the range for fibonacci series ::
-3
Please,Enter positive range.

Enter 0 for Exit.
Enter 1 to Continue.
0

 */