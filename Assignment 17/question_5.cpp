// 5. Write a program to convert a given string into lowercase
#include <string.h>
#include <iostream>
#include<algorithm> // tranform() declaration 
using namespace std;
int main()
{
    char str[50];
    cout << "Enter string to convert into lower case: \n";
    cin.getline(str, sizeof(str));
    // cout << strlwr(str);
    transform(str,&str[strlen(str)-1],str,::tolower); // best function to convert upper to lower case in c++
    cout<<str;
    return 0;
}