//Write a C program to get highest set bit of a number. // find highest position of set bit
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
       }
    }
    cout<<"Highest position of set bit is "<<count;
    return 0;
}