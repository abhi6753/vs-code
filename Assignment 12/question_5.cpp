//// 5. Write a recursive function to print first N even natural numbers
#include<iostream>
using namespace std;
void Even(int num)
{
    if(num==2)
    {
        cout<<num;
        return;
    }
    Even(num-2);
    cout<<","<<num;
    
}
int main()
{
    int num;
    cout<<"Enter value of N to print N even number: ";
    cin>>num;
    Even(num*2);
    return 0;
}