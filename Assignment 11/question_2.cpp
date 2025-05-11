// 2. Write a function to calculate HCF of two numbers. (TSRS)

#include<iostream>
using namespace std;
#include<cmath>
int hcf(int a,int b)
{
    int HCF =1;
    bool key = false;
    // a is a greater no.
    // b is a smaller no.
   if(a<b)
    {
        //swapping
        a= a^b;
        b = a^b;
        a = a^b;
    }
    for(int i =2;i<=b;i++)
    {
        if(a%i ==0 &&b%i ==0)
        {
          HCF =i;
          key = true;
        }
    }
    if(key )
    {
        return HCF;
    }
    return 1;

}
int main()
{
    int a,b;
    cout<<"****************** Calulate LCM of two integer ******************";
    cout<<"##################################################################"<<endl;
    cout<<"Enter two integer : "<<endl;
    cin>>a>>b;
    
    cout<<"LCM of "<<a<<" and "<<b<<" = "<<hcf(abs(a),abs(b));
    return 0;
}