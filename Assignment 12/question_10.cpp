// 10. Write a recursive function to print reverse of a given number
#include <iostream>
using namespace std;
int reverse(int num)
{
    static int rev = 0;
    if (num <= 0)
        return 0;
    rev = rev * 10 + num % 10;
    reverse(num / 10);
    return rev;
}
int main()
{
    int num;
    cout << "Enter whole number to reverse it: ";
    cin >> num;
    if(num<0)
    {
        cout << "Revers number of " << num << " is " << -reverse(abs(num)); // 123
    }
    else
    cout << "Revers number of " << num << " is " << reverse(num); // 123
    return 0;
}
