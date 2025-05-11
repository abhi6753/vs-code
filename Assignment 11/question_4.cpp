//4. Write a function to find the next prime number of a given number. (TSRS)
#include<iostream>
using namespace  std;
int nextPrime(int num)
{
    if(num<=1)
    return 2;
    num++;
    for(int i=2;i<=num/2;i++ )
    {
        if(num%i ==0)
        {
            num++;
        }

    }
    return num;
}
int main()
{
    int num;
    cout<<"Enter integer: ";
    cin>>num;
    cout<<"Next prime number of "<<num<<" is "<<nextPrime(num);
    return 0;
}