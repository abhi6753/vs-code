// 6. Write a program to calculate the length of the string using a pointer
#include<iostream>
using namespace std;
int main()
{
    char str[50];
    char *ptr = str;
    int len =0;
    cout<<"Enter string: "<<endl;
    cin.getline(str,50);
    for(int i =0;*(ptr+i);i++)
    {
        len++;
    }
    cout<<"Length of string = "<<len;
    return 0;
}