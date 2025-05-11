// 4. Write a program to calculate HCF of two numbers

//we can also find lcm and hcf of -ve number just neglect\
-ve sign and their answer will be always +ve
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1, num2, temp_num1, temp_num2, small_num, hcf = 1;
    cout << "Enter two whole number to find its H.C.F: ";
    cin >> num1 >> num2;
    /*if (num1 < 0 || num2 < 0)
    {
        cout << "Error! Plz. enter valid number:" << endl;
        return 0;
    }*/
    temp_num1 = num1;
    temp_num2 = num2;
    if (num1 == num2)
    {
        num1 < 0 ? hcf = -num1 : hcf = num1;
        // cout << "H.C.F of " << num1 << " and " << num2 << " = " << hcf;
        // return 0;
    }
    if (num1 < 0)
        temp_num1 = -num1;
    if (num2 < 0)
        temp_num2 = -num2;
    temp_num1 < temp_num2 ? small_num = temp_num1 : small_num = temp_num2;
    for (int i = 2; i <= small_num; i++)
    {
        if (temp_num1 % i == 0 && temp_num2 % i == 0) // Checks if i is factor of both integers
            hcf = i;                                  // hcf me highest factor store hooga jo ki hume chahiye
    }
    cout << "H.C.F of " << num1 << " and " << num2 << " = " << hcf;
    return 0;
}
