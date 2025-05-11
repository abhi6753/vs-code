// 3. Write a recursive function to print first N odd natural numbers
#include <iostream>
using namespace std;
void FirstOddNatural(int num)
{
    if(num==1)
    {
        cout<<num;
        return;
    }
    
    
    FirstOddNatural(num-2);
    cout<<","<<num;
}
int main()
{
    int num;
    input:
    cout<<"Enter value of N to print N natural number: ";
    cin>>num;
    if(num<=0 )
    {
        cout<<"Error! Min value of N should be 1"<<endl<<endl;
        goto input;
    }
    FirstOddNatural(num*2-1);
    
    return 0;
}