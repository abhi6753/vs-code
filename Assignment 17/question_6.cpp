// 6. Write a program to reverse a string.
#include <string.h>
#include <iostream>
#include<algorithm> // reverse() declaration
using namespace std;
int main()
{
    char str[50];
    cout << "Enter string : ";
    cin.getline(str, sizeof(str));
   // cout<<"Reverse string : " << strrev(str); // strrev() c++ me use krne pe redline deta hai isse accha hai reverse(starting adress of arra,last address of array) use kro

    reverse(str,&str[strlen(str)-1]);
    cout<<"Reverse string: "<<str;
   
    return 0;
}