// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.
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
    string str[size];
    input(str, size);

    for (int i = 0; i < size; i++)
    {
        size_t found = str[i].find('@'); // size_t is a unsigned int data type
        // if (found == string::npos)  When string search functions like find() or rfind() fail to locate\
         the specified substring or character, they return std::string::npos. This allows you to check if \
         the search was successful.
         if (found != string::npos) // npos is a static member constant of the string
        {
            cout << '@' << "' not found in string " << i + 1 << endl;
        }
      
    }

    return 0;
}