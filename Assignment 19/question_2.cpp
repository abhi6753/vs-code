// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
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
void sortString(string str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
        for (int j = i + 1; j < size; j++)
        {
            if (str[i].compare(str[j]) >= 1)
            {
                str[i].swap(str[j]);
            }
        }
    }
}
int main()
{
    int size;

    cout << "Enter number of string you want to enter: " << endl;
    cin >> size;
    fflush(stdin);
    string str[size];
    input(str, size);

    sortString(str, size);
    cout << "Sorted city names in dictionary order:\n";
    for (int i = 0; i < size; i++)
        cout << str[i] << endl;
    return 0;
}