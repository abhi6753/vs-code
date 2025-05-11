#include<iostream>
using namespace std;
int fact(int num)
{
    int Fact =1;
    for(int i=2;i<=num;i++)
    {
        Fact = Fact*i;
    }
    return Fact;
}
float permutation(int n,int r)
{
    // nPr = n!/(n-r) Permutation formula
    return fact(n)/fact(n-r);
}
int main()
{
    int n,r;
    cout<<"************* Permutation Calculator *************"<<endl<<endl;
    cout<<"##################################################"<<endl<<endl;
    cout<<"Enter value of n and r respectively: "<<endl;
    cin>>n>>r;
    if(n<r)
    {
        cout<<"please enter n ≥ r ≥ 0"<<endl;
        goto Return;
    }
    cout<<"Permutation = "<<permutation(n,r);
    Return :
    return 0;
}