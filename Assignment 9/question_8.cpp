// 8. Program to convert a positive number into a negative number and negative
//   number into a positive number using a switch statement.
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    short ch;
    float num, newnum;

main_menu:
    cout << "1. Convert negative to positive number" << endl;
    cout << "2. Convert positive to negative number" << endl;
    cout << "3. Exit" << endl
         << endl;
    cout<<"Enter option: ";
    cin >> ch;
    cin.clear();
    fflush(stdin);
    if (ch > 0 && ch <= 3)
    {
        if(ch==3)
          goto outside;
        cout << "Enter number: ";
        cin >> num;
        cin >> ch;
        cin.clear();
        fflush(stdin);
        if(num == 0)
         {
            cout<<" 0 is neither +ve nor negative"<<endl;
            goto outside;
         }
    }
    else
    {
        cout << "Error! Please enter correct option" << endl
             << endl;
        goto option;
    }
        switch (ch)
        {
        case 1:
        {
            num = -(num);
            cout << "Possitive number = " << num<<endl<<endl;
            break;
        }
        case 2:
        {
            num = -(num);
            cout << "Negative number = " << num<<endl<<endl;
            break;
        }
        default:
            goto outside;
        }
    option:
        cout << "Do you want to exit: " << endl;
        cout << "1. Yes" << endl
             << "2. No" << endl<<endl;
        cout<<"Enter option: ";
        cin >> ch;
        cin.clear();
        fflush(stdin);
        if (ch == 1)
            goto outside;
        else if (ch == 2)
            goto main_menu;
        else
        {
            cout << "Error! Please enter valid option" << endl;
            goto option;
        }
    outside:
        return 0;
    }