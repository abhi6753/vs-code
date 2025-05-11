//8. Write a program to find next Prime number of a given number
#include<iostream>
using namespace std;
int main()
{
    int num,tempNum;
    bool key = true; //key ko true se initialize isiliye kie taki user jb v <=1 enter krega\
to iterator run ni hoga to us case me v humara first prime no. 2 hi hoga jo ki num me assign \
    kiya gya hai or num value ko print krane k liye key ko true rhna hoga
    cout<<"Enter number to find next Prime number: ";
    cin>>num;
    
    tempNum=num; // user jo inter kiya
    if(num<=0)
     num=1;
    num++;
   for(int i = 2;i<=num/2;i++)
   {
     key =true;
     if(num%i==0)
     {
        i=1;
        num++;
        key  = false;
        continue;
     }
   }    
   cout<<"Next Prime number of "<<tempNum<<" is ";
    if(key)
     cout<<num;

    return 0;
}