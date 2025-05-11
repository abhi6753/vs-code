//4. Write a program to swap values of two int variables without using a third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two integer number: ";
    cin>>a>>b;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    //first method
    // a = a+b;
    // b = a-b;
    // a = a-b;

    // 2nd method using Xor '^' operator
     a = a^b;
     b = a^b;
     a = a^b;
    cout<<"After swapping:"<<endl;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    return 0;
}