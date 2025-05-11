// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp_num1, temp_num2, small_num;
    bool key = true;
    cout << "Enter two number to check whether co-prime or not: ";
    cin >> num1>> num2;
    num1 >= 0 ? temp_num1 = num1 : temp_num1 = -num1;
    num2 >= 0 ? temp_num2 = num2 : temp_num2 = -num2;
    temp_num1 > temp_num2 ? small_num = temp_num1 : small_num = temp_num2;
    for (int i = 2; i <= small_num; i++)
    {
        if (temp_num1 % i == 0 && temp_num2 % i == 0)
        {
            key = false;
            break;
        }
    }
    if (key)
        cout << num1 << " and " << num2 << " is co-prime" << endl;
    else
        cout << num1 << " and " << num2 << " is not co-prime" << endl;
    return 0;
}