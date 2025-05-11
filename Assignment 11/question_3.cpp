// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<iostream>
using namespace  std;
bool  checkPrime(int num)
{
   
    if(num==1)
    {
        return false;
    }
    for(int i =2;i<=num/2;i++)
    {
        if(num%i ==0)
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    int num;
    bool key;
    cout<<"Enter possitive integer to check prime or not: ";
    cin>>num;
    if(num<=0)
    {
        cout<<"Error! please enter possitive integr"<<endl;
        if(num==0)
        cout<<"Zero is neither possitive nor negative"<<endl;
    }
    key = checkPrime(num);
    if(key)
    {
        cout<<"Prime";
    }
    else
    cout<<"Not Prime";
    return 0;
}