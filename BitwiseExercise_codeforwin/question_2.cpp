// Write a C program to check Most Significant Bit (MSB) of a number is set or not.
#include<iostream>
using namespace std;
#define BITS sizeof(int)*8-1; // 1 isiliye minus kiye q ki agr hume 1 ko 5th bit pe le jana hai to humko 2 k power 4 place pe le jana hai
int main()
{
    int num,msb;
    cout<<"Enter number: ";
    cin>>num;
    msb = 1<<BITS; // 1 ko 32nd bit pe lekr chle gye it means 2 k power 31 k value ka & hoga humare num se
    if(num&msb)
    cout<<"MSB is set(1)";
    else
    cout<<"MSB is unset(0)";
    return 0;
}