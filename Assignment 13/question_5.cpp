//5. Write a recursive function to calculate sum of digits of a given number
#include<iostream>
using namespace std;
int Digitsum(int num)
{
    if(num<1)
     return 0;
    return num%10+Digitsum(num/10);
}
int main()
{
    int num;
    cout<<"Enter whole number to calculate sum of its digits: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Error! please enter whole number"<<endl;
        goto exit;
    }
    if(num<10)
    {
        cout<<"Sum of given number digit is "<<num;
        goto exit;
    }
    cout<<"Sum of given number digit is "<<Digitsum(num);
    exit:
    return 0;
}