//7. Write a program to find the position of first 1 in LSB.
#include<iostream>
using namespace std;
int main()
{
    int num,lsb,count=1;
    cout<<"Enter integer to check its first 1 in LSB: ";
    cin>>num;
    for(;;)//agar chahe to hum condition lga skte hai for loop me q
            // ki total 32 bit hote hai int type ka but no need
    {
        lsb = num&1;
        if(lsb)
         break;
         num>>=1;
         count++;
    }
    cout<<"first 1 from lSB is at "<<count <<" position";
    return 0;
}