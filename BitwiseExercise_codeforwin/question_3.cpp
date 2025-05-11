//Write a C program to get nth bit of a number.
#include<iostream>
using namespace std;

int main()
{
    int num,n,bit;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter nth bit to check(0-31): ";
    cin>>n;
    bit = 1<<n;
    if(num&bit)
    {
        cout<<"Bit "<<n<<" is set(1)";
    }
    else
    cout<<"Bit "<<n<<" is unset(0)";
    return 0;
}