// 9. Write a program in C to count the digits of a given number using recursion.
#include <iostream>
using namespace std;
#include <cmath>
short count(int num)
{
    static int Count = 0; // counter;

    if (num == 0)
    {
        return 1;
    }
    Count++;
    count(num / 10);

    return Count;

   /* if(num>=0&&num<=9) // we can also use this logic without using any variable
    { 
       return 1; 
    }
        return 1+ count(num/10);*/
}
int main()
{
    float num;
    cout << "Enter integer to count its digits: ";
    cin >> num;
    if (num > (int)num)
    {
        cout << "Error! please enter integer number" << endl;
        goto exit;
    }
    cout << "Number of digits in " << num << " is " << count(abs(num));
exit:
    return 0;
}