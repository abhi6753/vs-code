//Write a C program to flip bits of a binary number using bitwise operator.
#include<iostream>
#include<conio.h>
using namespace std;
#define BITS sizeof(int)*8-1
int main()
{
    int num,flipped_num;
    cout<<"Enter number: ";
    cin>>num;
    flipped_num = ~num;
    cout<<"Number after bits are flipped "<<num<<" is "<<flipped_num<<(" in decimal");
    return 0;
}