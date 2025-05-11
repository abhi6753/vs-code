//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<iostream>
using namespace std;
void fibonacci(int num)
{
    unsigned first_term =1,last_term =-1,next_term=first_term+last_term;

    cout<<next_term;

    while(--num>0)
    {
        last_term = first_term;
        first_term = next_term;
        next_term = last_term+first_term;
        
        cout<<" , "<<next_term;

    }
}
int main()
{
    float num;
    cout<<"Enter number of terms to print first Fibonacci series: ";
    cin>>num;
    if(num<=0||num>(int)num)
    {
        cout<<"Error! please enter natural number"<<endl;
        goto exit;

    }
    fibonacci(num);
    exit:
    return 0;
    
    
}