//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<iostream>
using namespace std;
void Swap(float *a,float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    float a,b;
    cout<<"Enter two number : "<<endl;
    cin>>a>>b;
    cout<<"Value Before Swapping"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    Swap(&a,&b);
    cout<<"Value After Swapping"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    return 0;
}