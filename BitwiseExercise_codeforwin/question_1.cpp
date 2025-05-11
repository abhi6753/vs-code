//Write a C program to check Least Significant Bit (LSB) of a number is set or not.
#include<iostream>
using namespace  std;

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num&1)
     cout<<"LSB is set(1)";
    else
    cout<<"LSB is unset(0)";
    return 0;
}