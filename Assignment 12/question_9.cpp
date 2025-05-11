// //9. Write a recursive function to print octal of a given decimal number
#include<iostream>
using namespace std;
int octal(int num) 
{
    static int oct=0; // static variable only first time intialize
    if(num<1)
    {
        return 0;
    }
    octal(num/8);
  oct = oct*10+num%8;
   return oct;
}
int main()
{
    int num,rev;
    cout<<"Enter natural number to convert into octal: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Error! please enter natural number"<<endl;
        goto exit;
    }
  cout<<octal(num); //123
  exit:
    return 0;
}
