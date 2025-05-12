// 5. Write a program to find the maximum number between two numbers using a pointer
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *i, *j;
    i = &a;
    j = &b;
    cout << "Enter two number: " << endl;
    cin >> *i >> *j;
    if (*i > *j)
        cout << "Maximum number = " << *i << endl;
    else
        cout << "Maximum number = " << *j << endl;
    return 0;
}