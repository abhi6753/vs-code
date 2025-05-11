////1. Write a recursive function to calculate sum of first N natural numbers
#include<iostream>
using namespace std;
int naturalSum(int num)
{
    
    if(num==1)
    {
        return 1;
    }
   
    return num+naturalSum(num-1);
}
int main()
{
    int num;
    cout<<"Enter value of N to calculate sum of first N natural number: ";
    cin>>num;
    cout<<naturalSum(num);
    return 0;
}