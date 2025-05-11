// Write a C program to count total zeros and ones in a binary number.
//Write a C program to count leading zeros in a binary number.
#include<iostream>
#include<conio.h>
using namespace std;
#define BITS sizeof(int)*8-1
int main()
{
    int num,ones=0,zeros=0;
    cout<<"Enter number: ";
    cin>>num;
    for(int i =0;i<32;i++)
    {
        if(num&1)
        {
            ones++;
        }
        else
        zeros++;
        num>>=1;
    }
    print:
    cout<<"Total zero bit is "<<zeros<<endl;
    cout<<"Total one bit is "<<ones<<endl;
    return 0;
}