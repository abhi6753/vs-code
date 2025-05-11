// 6. Write a recursive function to calculate factorial of a given number
#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==1||num==0)
    {
        return 1;
    }
    return num*fact(num-1);
}
int main()
{
    int num;
    cout<<"Enter number to calculate its factorial: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Error! please enter natural number";
        goto exit;
    }
    cout<<"Factorial of "<<num<<" is "<<fact(num);
    exit:
    return 0;
}