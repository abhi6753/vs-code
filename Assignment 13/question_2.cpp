// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<iostream>
using namespace std;
int OddNaturalSum(int num)
{
    //static int sum=0;
    if(num==1)
    {
        return 1;
    }
   
    return num+OddNaturalSum(num-2);
}
int main()
{
    int num;
    cout<<"Enter value of N to calculate sum of first N odd natural number: ";
    cin>>num;
    cout<<OddNaturalSum(num*2-1);
    return 0;
}