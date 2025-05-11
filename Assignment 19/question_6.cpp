// 6. Write a program to print the strings which are palindrome in the list of strings.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void input(string str[], int size)
{
    cout << "Enter " << size << " strings: " << endl;
    for (int i = 0; i < size; i++)
    {
        getline(cin, str[i]);
    }
}
int main()
{
    int size;
    cout << "Enter number of string you want to enter: " << endl;
    cin >> size;
    fflush(stdin);
    string str[size], temp;
    input(str, size);
    for (int i = 0; i < size; i++)
    {
        temp = str[i];
        reverse(temp.begin(), temp.end());
        if (str[i].compare(temp) == 0)
        {
            cout << "string " << i + 1 << " is palindrome string" << endl;
        }
    }
    return 0;
}