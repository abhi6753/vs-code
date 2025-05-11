// 2. Write a function to reverse a string.
#include <iostream>
using namespace std;
#include <string>
int strreverse(string str)
{
    int length = 0;
    // for (int i = 0; str[i]; i++)
    // {
    //     length++;
    // }
    for(auto i : str) // both iterator have time complexity O(N) and space complexit O(1);
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
    cout << "Length of entered string is " << strreverse(str);
    return 0;
}