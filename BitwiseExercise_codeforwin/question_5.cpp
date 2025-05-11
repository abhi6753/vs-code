//Write a C program to clear nth bit of a number.
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
    if(num&bit)
    {
        num = num^(1<<n);
        cout<<"Bit "<<n<<" is clear(0)";
    }
    else
    cout<<"Bit "<<n<<" is already clear(0)";
    cout<<num;
    return 0;
}