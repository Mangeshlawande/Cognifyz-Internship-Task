
#include <iostream>
#include <fstream> // for file handling.

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

- In order to work with files, you will have to open it. There are 2 ways to open a file :
1. using constructor
2. using member function open() of the class



*/

void funFile()
{

    string s, s1 = "from ofstream class create hout object and use open() function in object.", s2;
   
    // write file
    ofstream hout;
    hout.open("input.txt");
    hout << s1;
    hout.close();

    // read file
    ifstream hin;
    hin.open("sample.txt");

    // hin>>s>>s1>>s2;
    // cout<<s<<s1<<s2<<endl;

    while (hin.eof() == 0)
    {
        getline(hin, s);
        cout << s << endl;
    }

    hin.close();
}

void fileClass()
{
    string s;
    cout << "Write data which you want to enter in input file:\n";
    cin >> s;
    string s2;

    // opening file using constructor and  writing it.
    ofstream out("input.txt"); // write operation
    out << s;
    cout << "Content write successfully in file !!\n";
    

    // // opening file using constructor and  writing it.
    // ifstream in("input.txt"); // read operation.
    // // in >> s2;
    // getline(in, s2);
    // cout << s2 << endl;
}

void fileClass1()
{
    string name;
    // connecting our file with hout stream
    ofstream hout("input.txt");
    // filling string enter by user
    cout << "Enter your name : ";
    cin >> name;
    // writing string to the file.
    hout << "My name is " + name;
    // close the file.
    cout << "data entered successfully  !!\n";
    hout.close();

    // read file content
    ifstream hin("input.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout << "Content of the file is : " << content << endl;
    hin.close();
}
int main()
{

    string source, destination;

    cout << "\nEnter sourcefile name: ";
    cin >> source;

    cout << "\nEnter destinationfile name: ";
    cin >> destination;

    ifstream src(source, ios :: in);
    if(!src){
        cout<< "Source file is Empty \n";
    }

    ofstream dest(destination, ios :: out);
    if(!dest){
        cout<< "Could not open Destination file ! \n";
    }
    char ch;
    while (src.get(ch))
    {
       dest.put(ch);
    }
    
  cout << "File copied successfully from " << source << " to " << destination << "." << endl;

    // Close files
    src.close();
    dest.close();




    return 0;
};