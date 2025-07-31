#include <iostream>
using namespace std;

/*
Task: Array Sorting Description:
Write a program that sorts an array of integers in ascending or descending order.
Prompt the user to input the arrayelements and choose the sorting order.
Display the sorted array.
 Skills: Arrays, loops, conditional statements, sorting algorithms
  (e.g.,bubble sort, selection sort).

*/

int main()
{
    int num;
    int choice;
    cout << "Enter the number of elements in the array : ";
    cin >> num;

    int arr[num];

    printf("Enter %d elements :\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("Element %d : ", i + 1);
        cin >> arr[i];
    };

    // sorting order
    cout << "\nChoose Sorting order: \n";
    cout << "1. Ascending Order\n";
    cout << "2. Descending Order\n";
    cout << "Enter your choice (1, 2) : ";

    cin >> choice;

    // bubble  sort

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (choice == 1)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    };

    cout << "\nSorted array: ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
