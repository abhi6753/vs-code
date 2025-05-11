// 8. Write a recursive function to print binary of a given decimal number
#include <iostream>
using namespace std;
int binary(int num)
{
    static int bin = 0; // static variable only first time intialize
    if (num < 1)
    {
        return 0;
    }
    binary(num / 2);
    bin = bin * 10 + num % 2;
    return bin;
}
int main()
{
    int num, rev;
    cout << "Enter natural number to convert into binary: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Error! please enter natural number" << endl;
        goto exit;
    }
    cout << binary(num); // 123
exit:
    return 0;
}
