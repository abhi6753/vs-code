// 4. Write a program to search a string in the list of strings.]
#include <iostream>
#include <string>

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
    string str[size], wordToFind;
    input(str, size);
    cout << "Enter string to find it: " << endl;
    getline(cin, wordToFind);

    for (int i = 0; i < size; i++)
    {
        size_t found = str[i].find(wordToFind); // size_t is a unsigned int data type
        if (found != string::npos)
        {
            cout << "Word '" << wordToFind << "' found in string " << i + 1 << " at position: " << found << endl;
        }
        else
        {
            cout << "Word '" << wordToFind << "' not found in string " << i + 1 << endl;
        }
    }

    return 0;
}