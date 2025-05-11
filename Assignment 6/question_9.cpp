// 9. Write a program to calculate LCM of two numbers
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1, num2, temp_num1, temp_num2, small_num, large_num, lcm;
    cout << "Enter two whole no. to find its LCM: ";
    cin >> num1 >> num2;
    temp_num1 = num1;
    temp_num2 = num2;
    if (num1 < 0)
    {
        temp_num1 = -num1;
    }
    if (num2 < 0)
    {
        temp_num2 = -num2;
    }

    /*if (num1 <= 0 || num2 <= 0)
    {
        if (num1 == 0 || num2 == 0)
        {
            lcm = 0;
            cout << "L.C.M of " << num1 << " and " << num2 << " is " << lcm;
        }

        else
            cout << "Error! Plz. enter valid number";
        return 0;
    }*/
   // condition used when one of the two are zero
    if (num1 == 0 || num2 == 0)
    {

        lcm = 0;
        // cout << "L.C.M of " << num1 << " and " << num2 << " is " << lcm;
        // return 0;
    }
    // condition used when both no. are same
    if (temp_num1 == temp_num2)
    {
        lcm = temp_num1;
        // cout << "L.C.M of " << num1 << " and " << num1 << " is " << lcm;
        // return 0;
    }
    // condition is used to get smaller & larger no.
    if (temp_num1 > temp_num2)
    {
        large_num = temp_num1;
        small_num = temp_num2;
    }
    else
    {
        large_num = temp_num1;
        small_num = temp_num2;
    }
    /*if (num1 < num2) // ye kar skte hai lekin num1 and num2 ka value swap ho jayega print krte time
                       // lekin hm isme ek key use kr skte hai jo ki btayega ye condition chla hai ya ni
                       // agr chla hua rhe to key ko true kr do or fir print krte time us key k help se condition rkh lo
                       // if(key==true) then interhange num1 & num2 place
    {
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
    }*/
   //condition is used for to get hcf of all no. except same and zero.
    for (int i = 1; i <= small_num; i++)
    {
        if (large_num * i % small_num == 0)
        {
            lcm = large_num * i;
            break;
        }
    }
    cout << "L.C.M of " << num1 << " and " << num2 << " = " << lcm;
    return 0;
}