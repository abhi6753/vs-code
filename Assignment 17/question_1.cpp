// 1. Write a program to calculate the length of the string. (without using built-in method)

//Assignment 17 me humne string ko C-style me store kiye hai jabki better approach hai c++ me string data type ka use krna
// to hum Assignment 17.c jisme hum string data type ka use krenge or ab se saara string ko hum string data type me hi store krenge c++ me next assignment se
#include <iostream>
using namespace std;
int main()
{
    char str[50];
    cout << "Enter your name: ";
    cin.getline(str, 50); // to take input int char array data type using getline() then use geltine() like member func of cin.

    //  getline(cin,str);  //This funtion is used to take full name in c++ using string data type

    //fgets(str,sizeof(str),stdin);// This funtion is used to take full name in c  and c++ ,container should be array type;
   
    // getline() doesn't count enter  key as a character when we press enter at the end of string
    // while fgets() count enter key as a character
    int i, whitespace = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 32)
        {
            whitespace++;
        }
    }
    i -= whitespace;
    cout << "Your name has " << i << " characters." << endl;
    return 0;
}