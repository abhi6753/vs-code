// 1. Write a program to calculate the length of the string. (without using built-in method)
#include<iostream>
using namespace std;
#include<string>
int main()
{   short len=0;
    string str;
    cout<<"Enter string to calculate its length: \n";
    getline(cin,str);
    
    for(int i =0;str[i];i++)
    {
        len++;
    }
    cout<<"Length of string is "<<len;
    return 0;
}