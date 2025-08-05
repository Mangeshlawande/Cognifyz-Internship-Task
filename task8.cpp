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
/*
 g++ task8.cpp && ./a.out
output::
Enter the number of elements in the array : 6
Enter 6 elements :
Element 1 : 32
Element 2 : 12
Element 3 : 15
Element 4 : 2
Element 5 : 4
Element 6 : 11

Choose Sorting order:
1. Ascending Order
2. Descending Order
Enter your choice (1, 2) : 1

Sorted array: 2 4 11 12 15 32

======================

Enter the number of elements in the array : 7
Enter 7 elements :
Element 1 : 7
Element 2 : 3
Element 3 : 6
Element 4 : 2
Element 5 : 5
Element 6 : 11
Element 7 : 14

Choose Sorting order:
1. Ascending Order
2. Descending Order
Enter your choice (1, 2) : 2

Sorted array: 14 11 7 6 5 3 2


*/