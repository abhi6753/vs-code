// 9. Program to Convert even number into its upper nearest odd number using Switch Statement.
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int num;
    bool key = false;
    cout << "Enter natural number: ";
    cin >> num;
    if (num > 0)
    {
        key = true;
    }
    switch (key)
    {
    case 1:
    {
        switch (num % 2 == 0)
        {
        case 1:
            cout << "Upper nearest odd number = " << num + 1 << endl;
            break;
        case 0:
            cout << "Upper nearest even number = " << num + 1 << endl;
            break;
        }
    }
    case 0:
      cout<<"Please enter natural number"<<endl;
        break;
    }
    return 0;
}