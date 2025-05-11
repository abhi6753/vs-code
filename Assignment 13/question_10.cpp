// 10. Write a program in C to calculate the power of any number using recursion.
#include <iostream>
#include <cmath>
using namespace std;
int power(int base, int expo)
{

    if (expo <= 1)
    {
        if (expo == 1)
            return base;
        else
            return 1;
    }
    return base * power(base, expo - 1);
}
int main()
{
    float base, expo;
    cout << "Enter base and exponent respectively to find its power: ";
    cin >> base >> expo;
    if (base > (int)base || expo > (int)expo || expo < 0)
    {
        cout << "Error! please enter integer base and possitive integer exponent";
        goto exit;
    }
    cout << base << "^" << expo << " = " << power(abs(base), expo);
exit:
    return 0;
}