// Write a C program to toggle nth bit of a number. // toggle means if bit is set then unset it and vice versa
#include<iostream>
using namespace std;

int main()
{
    int num,n,newnum;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter nth bit to set(0-31): ";
    cin>>n;
    newnum = num^(1<<n);
   cout<<"Number before toggle: "<<num<<endl;
   cout<<"Number after toggle: "<<newnum<<endl;
  
    return 0;
}