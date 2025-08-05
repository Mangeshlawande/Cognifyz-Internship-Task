#include <iostream>
using namespace std;

/*
Task: String Reversal

Description:Write a program that takes a string as input and reverses it.
 Display the reversed string on the console.

*/
// two pointer swapping
void reverseString(char s[])
{
    int j, i;
    char t;
    for (j = 0; s[j] != '\0'; j++)
    {
    }
    j = j - 1;

    for (i = 0; i < j; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    cout << s << endl;
}

int main()
{
    int n;
    printf("Enter the size of string : \n");
    scanf("%d", &n);
    char name[n];
    printf("Enter string : \n");
    scanf("%s", name);

    printf("Reverse of string : ");
    reverseString(name);

    return 0;
};
/**
 * output :
 * 
Enter the size of string :
15
Enter string :
Two_pointer_swap
Reverse of string : paws_retniop_owT

===============

Enter the size of string :
30
Enter string :
Cognifyz
Reverse of string : zyfingoC

 */