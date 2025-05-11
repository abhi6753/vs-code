// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<iostream>
using namespace std;
#include<cmath>
int lcm(int a,int b)
{
    // a is a greater no.
    // b is a smaller no.
   if(a<b)
    {
        //swapping
        a= a^b;
        b = a^b;
        a = a^b;
    }
    for(int i =1;i<=b;i++)
    {
        if(a*i%b==0)
        {
            return a*i;
        }
    }
    return a*b;

}
int main()
{
    int a,b;
    cout<<"****************** Calulate LCM of two integer ******************";
    cout<<"##################################################################"<<endl;
    cout<<"Enter two integer : "<<endl;
    cin>>a>>b;
   
    cout<<"LCM of "<<a<<" and "<<b<<" = "<<lcm(abs(a),abs(b));
    return 0;
}