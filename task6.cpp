#include <iostream>
using namespace std;
/*
Task: Palindrome Checker Description: Write a program that checks whether agiven word or phrase is a palindrome.
 A palindrome is a word or phrase that reads the same forwards and backwards.Prompt the user to input a word orphrase and display whether it is apalindrome or not.
Skills: String manipulation, loops,conditional statements.
*/

bool isPalindrome(const string &str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }
    return true; // It's a palindrome
};

int main()
{
    char input[30];
    cout << "Enter the string for Palindrome check : ";
    cin >> input;

    if (isPalindrome(input))
    {
        cout << "\nGiven string is valid palindrome !!\n"
             << endl;
    }
    else
    {
        cout << "\nGiven string is invalid palindrome !!\n"
             << endl;
    }

    return 0;
};