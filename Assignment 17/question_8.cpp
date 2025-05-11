// 8. Write a program in C to copy one string to another string.
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char str[50];
    cout << "Enter string : ";
    cin.getline(str, sizeof(str));
    char str2[strlen(str)];
    cout<<"String in second array : " <<strcpy(str2,str);
   
    return 0;
}