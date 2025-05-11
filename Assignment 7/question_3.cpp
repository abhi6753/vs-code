// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <iostream>
using namespace std;
int CountDigit(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}
int main()
{
    int num, prev, current, next;
    short GivenNumDigit = 0;
    bool key = false;
    prev = 0;
    current = 1;
    next = prev + current; //ye isilie krna pda ki agr first time while me jaye to  to next ka digit count kr ske
    cout << "Enter number to check there is in the Fibonnaci series or not: ";
    cin >> num;
    if (num <0)
    {
        cout << "Number is not in fibonnaci series";
        return 0;
    }
    if(num==0)
    {
        cout <<num <<" is in fibonnaci series";
        return 0;
    }
    GivenNumDigit = CountDigit(num);

    while (GivenNumDigit >= CountDigit(next))
    {
        next = prev + current;
        if (num == next)
        {
            key = true;
            break;
        }
        
        prev = current;
        current = next;
    }
    if (key)
        cout <<num <<" is in fibonnaci series";
    else
        cout <<num<< " is not in fibonnaci series";
    return 0;
}

/*
// Dono program ka logic maine khud se likha hai
Agr hum ye logic use krte hai to hume 0th term k liye alag se condition use ni krna pdega 
dono program bilkul sahi hai but mujhe iska logic pasand aa rha hai

#include <iostream>
using namespace std;
int CountDigit(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}
int main()
{
    int num, prev,current,next;
    short GivenNumDigit = 0;
    bool key = false;
    prev = 0;
    current = 1;
    next = prev + current; //ye isilie krna pda ki agr first time while me jaye to  to next ka digit count kr ske
    cout << "Enter number to check there is in the Fibonnaci series or not: ";
    cin >> num;
    if (num <0)
    {
        cout << "Number is not in fibonnaci series";
        return 0;
    }
    GivenNumDigit = num==0?current,key = true:CountDigit(num);

    while (GivenNumDigit >= CountDigit(next))
    {
        next = prev + current;
        if (num == next)
        {
            key = true;
            break;
        }
        
        prev = current;
        current = next;
    }
    if (key)
        cout <<num <<" is in fibonnaci series";
    else
        cout <<num<< " is not in fibonnaci series";
    return 0;
}
  */