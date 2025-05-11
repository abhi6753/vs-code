//Write a C program to count leading zeros in a binary number.
#include<iostream>
#include<conio.h>
using namespace std;
#define BITS sizeof(int)*8-1
int main()
{
    int num,count=0,msb;
    cout<<"Enter number: ";
    cin>>num;
    msb = 1<<BITS&num;
    if(msb)
    {
        count =0;
        goto print; // break;
    }
    for(int i = 0;i<32;i++)
    {
        if( 1<<i&num)
        {
            count =0;
            continue;
        }
        count++;
        num>>1;
    }
    print:
    cout<<"Total number of leading zeros in "<<num<<" is "<<count;
    return 0;
}