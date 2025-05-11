// Write a C program to count trailing zeros in a binary number.
// first set bit k phle jitna unset bit hai usi ko trailing zeros bolte hai
#include<iostream>
#include<stdio.h>
using namespace std;
#define BITS sizeof(int)*8-1;
int main()
{
    short i,count=0;
    int num;
    cout<<"Enter number: ";
    cin>>num;
    for(i =0;i<32 ;i++)
    {
       if(1<<i&num)
       {
        count = i;
        break;
       }
    }
    cout<<"Total number of trailing zeroes in "<< num<<" is "<<count;
    return 0;
}