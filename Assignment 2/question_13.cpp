// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.
// eg. input= 362 output = 236
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num, rem, new_num, temp;
    bool val=false;
    cout << "***************Program:-> Rotate its digits by"
    "one position towards the right***************" << endl;
    cout << "Enter 3-digit integer: ";
    cin >> num;
    ((num >= 100 && num <= 999) || (num <= -100 && num >= -999))
    ? temp = num,val =true :printf("Error! Plz. enter 3-digit integer");
    if (val)
    {
        rem = num % 10;
        temp = temp / 10;
        new_num = rem * 100 + temp;
        cout << "Number after rotation = " << new_num;
    }
    return 0;
}