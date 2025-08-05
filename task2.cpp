#include <iostream>
using namespace std;

/*
Task: Calculator Program
Description:Write a program that takes two numbers and an operator as input(+, -, *, /, %) and performs the corresponding arithmetic operation.
Display the result on the console.
Skills: Basic input/outputoperations, conditional statements,and arithmetic operations.
*/

void calculator(float a, float b, char ch)
{
    switch (ch)
    {
    case '+':
        printf("Addition of  %.0f %c %.0f = %.0f \n", a, ch, b, a + b);
        break;
    case '-':
        printf("Substraction of %.0f %c %.0f = %.0f \n", a, ch, b, a - b);
        break;
    case '*':
        printf("Multiplication of %.0f %c %.0f = %.0f \n", a, ch, b, a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("Division of %.0f %c %.0f = %.0f \n", a, ch, b, a / b);
        }
        else
        {
            printf("Division by zero is not allowed.\n");
        }
        break;

    case '%':
        if ((int)b != 0)
        {
            printf("Modulo of %.0f %c %.0f = %d \n", a, ch, b, (int)a % (int)b);
        }
        else
        {
            printf("Error: Modulo by zero is not allowed.\n");
        }

        break;

    default:
        printf("Error: Invalid operator.\n");
        break;
    }
};

int main()
{
    int c = 1;
    char ch;
    float a, b;
    while (c)
    {
        cout << "Enter Two Numbers for operation : \n";
        cin >> a >> b;
        cout << "Enter operator (+, -, *, /, %) to perform calculation\n ";
        cin >> ch;
        calculator(a, b, ch);
        cout << "Enter 1 for continue.\n";
        cout << "Enter 0 for Exit.\n";
        cin >> c;
    }

    return 0;
};

/*
output:

Enter Two Numbers for operation : 
15
10
Enter operator (+, -, *, /, %) to perform calculation
 *
Multiplication of 15 * 10 = 150 
Enter 1 for continue.
Enter 0 for Exit.
1
Enter Two Numbers for operation : 
34
6
Enter operator (+, -, *, /, %) to perform calculation
 /
Division of 34 / 6 = 6 
Enter 1 for continue.
Enter 0 for Exit.
0

*/