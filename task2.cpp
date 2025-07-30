#include <iostream>
using namespace std;

/*
Task: Calculator Program
Description:Write a program that takes two numbers and an operator as input(+, -, *, /, %) and performs the corresponding arithmetic operation.
Display the result on the console.
Skills: Basic input/outputoperations, conditional statements,and arithmetic operations.
*/

int main()
{

    char ch;
    float a, b;
    cout << "Enter Two Numbers for operation : \n";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /, %) to perform calculation\n ";
    cin >> ch;

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

    return 0;
};