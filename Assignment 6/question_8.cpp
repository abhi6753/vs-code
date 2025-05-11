// 8. Write a program to check whether a given number is a Prime number or not
#include <iostream>
using namespace std;
int main()
{
    int num;
    bool key = true;
    cout << "Enter +ve integer to check wheather it is Prime or Not: ";
    cin >> num;
    if(num<0)
    {
        cout<<"Error!, Plz.. enter +ve integer."<<endl;
        return 0;
    }
    if(num==1)
    {
        cout<<"1 is neither Prime nor Composite number"<<endl;
        return 0;
    }
    else
    {
        cout<<"0 is neither Prime nor Composite number"<<endl;
        return 0;
    }
    
   // for (int i = 2; i * i <= num; i++) // shradha mam 'Apna college'
    for (int i = 2; i<= num/2; i++) //dono ka time complexity same hai
    {
        if (num % i == 0)
        {
            key = 0;
            break;
        }
    }
    if (key)
        cout << num << " is prime number";
    else
        cout << num << " is not a prime number";
    return 0;
}