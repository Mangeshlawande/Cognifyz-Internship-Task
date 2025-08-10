#include <iostream>
using namespace std;

int a = 0;

int fact(int n)
{
    if (n < 0)
    {
        a = 1;
        n = -n;
    }
    if (n == 0 || n == 1)
    {
        if (a)
        {
            return -1;
        }
        return 1;
    }
    return fact(n - 1) * n;
}

int main()
{
    int num, ch = 1;
    while (ch)
    {
        cout << "Enter the number for factorial : ";
        cin >> num;
        printf("Factorial of %d is : %d\n", num, fact(num));
        cout << " Enter 0 for exit.\n Enter 1 to Continue.\n";
        cin >> ch;

        // redeclaration for -ve value;
        if (a == 1)
        {
            a = 0;
        }
    }
    return 0;
};