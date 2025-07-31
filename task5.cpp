#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
Description: Write a program that copies the contents of one file to another.

Prompt the user to input the names of the source and destination files.
Read the contents of the source file and write them to the destination file.

Skills: File handling, basic input/output operations.

useful classes for working with files in c++ are :
1. fstreambase --> parent class.
2. ifstream  --> child class
3.ofstream  --> child class

*/

int main()
{
    string sourceFile, destinationFile;

    // Prompt user for filenames
    cout << "Enter the source file name: ";
    cin >> sourceFile;

    cout << "Enter the destination file name: ";
    cin >> destinationFile;

    // Open source file for reading
    ifstream src(sourceFile, ios::in);
    if (!src)
    {
        cerr << "Error: Could not open source file: " << sourceFile << endl;
        return 1;
    }

    // Open destination file for writing
    ofstream dest(destinationFile, ios::out);
    if (!dest)
    {
        cerr << "Error: Could not open destination file: " << destinationFile << endl;
        return 1;
    }

    // Copy contents character by character
    char ch;
    while (src.get(ch))
    {
        dest.put(ch);
    }

    cout << "File copied successfully from " << sourceFile << " to " << destinationFile << "." << endl;

    // Close files
    src.close();
    dest.close();

    return 0;
};

