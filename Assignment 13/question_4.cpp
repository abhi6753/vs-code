// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<iostream>
using namespace std;
int Sumofsquare(int num)
{
    if(num==1)
    return 1;
    return num*num+Sumofsquare(num-1);
}
int main()
{
    int num;
    cout<<"Enter value of N to print sum of squares of first n natural numbers: ";
    cin>>num;
    if(num<1)
    {
        cout<<"Error! please enter vale of N atleast 1";
        goto exit;
    }
    cout<<"Sum of squares of first "<<num<<" natural numbers is "<<Sumofsquare(num);
    exit:
    return 0;
}