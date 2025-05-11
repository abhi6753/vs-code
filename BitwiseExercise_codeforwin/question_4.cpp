//Write a C program to set nth bit of a number.
#include<iostream>
using namespace std;

int main()
{
    int num,n,bit;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter nth bit to set(0-31): ";
    cin>>n;
    bit = 1<<n;
    if(!(num&bit))
    {
        num = num|(1<<n);
        cout<<"Bit "<<n<<" is set(1)";
    }
    else
    cout<<"Bit "<<n<<" is already set(1)";
    cout<<num;
    return 0;
}