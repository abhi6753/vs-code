//3. Write a recursive function to calculate sum of first N even natural numbers
#include<iostream>
using namespace std;
int evenNaturalSum(int num)
{
    if(num==2)
    {
        return 2;
    }
   
    return num+evenNaturalSum(num-2);
}
int main()
{
    int num;
    cout<<"Enter value of N to calculate sum of first N even natural number: ";
    cin>>num;
    cout<<evenNaturalSum(num*2);
    return 0;
}