// 1. Write a function to calculate length of the string
#include <iostream>
using namespace std;
#include <string>
int strlength(string str)
{
    int length = 0;
    for (int i = 0; str[i]; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << "Length of entered string is " << strlength(str);
    return 0;
}