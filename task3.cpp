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
    int range;
    cout << "Enter the range for fibonacci series :: \n";
    cin >> range;
    if (range < 0)
    {
        cout << "Please,Enter positive range.\n";
    }
    fibonacci(range);
    return 0;
};