// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <iostream>
using namespace std;
void First_N_PrimeNum(int a, int b)
{
    bool key = true, flag = false;
    if (a > b)
    {
        // swapping
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    //  a me smaller num
    //  b me greater num

    while (++a < b)
    {
        key = true;
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                key = false;
                break;
            }
        }
        if (key == true)
        {
            cout << a << " ";
            flag = true; // is flag ko use krna pada taki agr interval me koi v prime number ni ho to niche ka condition chl sake
        }
    }
    if (flag == false)
    {
        cout << "No prime number b/w them" << endl;
    }
}
int main()
{
    float a, b;
    cout << "Enter two natural number to print all prime number b/w them: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0 || a > (int)a || b > (int)b)
    {
        cout << "Error! Please enter counting number" << endl;
        goto exit;
    }
    if (a == b)
    {
        cout << "Error! both number should be diffrent";
        goto exit;
    }
    First_N_PrimeNum(a, b);
exit:
    return 0;
}