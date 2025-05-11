//7. Write a recursive function to calculate HCF of two numbers
#include<iostream>
using namespace std;
#include<cmath>
int hcf(int a,int b)
{
    static int HCF=1;
    if(a>b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if(b%a!=0)
    
        hcf(b%a,a);
    
    else
    HCF =a;
    return HCF;
}
int main()
{
    float a,b;
    cout<<"Enter two integer to find its H.C.F: ";
    cin>>a>>b;
    if(a>(int)a||b>(int)b)
    {
        cout<<"Error! Please enter integer";
        goto exit;
    }
    cout<<"H.C.F of "<<a <<" and "<<b<<" is "<<hcf(abs(a),abs(b));
    exit:
    return 0;
}