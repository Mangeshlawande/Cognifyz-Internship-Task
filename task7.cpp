#include <iostream>
using namespace std;

/*
Task: Student Grade Calculator
Description: Create a program that calculates the average grade of a student.
Prompt the user to enter the number of subjects,and then input the grades for each subject.
Calculate the average grade and display it to the user.

Skills: Loops, arrays, basic arithmetic operations.

*/

int main()
{

    int subjects;
    float total = 0;

    cout << "Enter the number of subjects: ";
    cin >> subjects;

    if (subjects <= 0)
    {
        cout << "Invalid number of subjects!" << endl;
        return 1;
    }
    // Fixed-size array
    float grades[100];

    // Input grades for each subject
    for (int i = 0; i < subjects; i++)
    {
        float grade;
        cout << "Enter grade for subject " << i + 1 << ": ";
        cin >> grade;

        // Validate grade
        if (grade < 0 || grade > 100)
        {
            cout << "Invalid grade. Please enter a value between 0 and 100." << endl;
            i--;
            continue;
        }

        grades[i] = grade;
        total += grade;
    }

    // Calculate average
    float average = total / subjects;

    cout << "The average grade is: " << average << endl;

    return 0;
};
