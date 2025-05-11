//10. Write a program to print all Armstrong numbers under 1000
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=1000,temp,sum=0;
    short rem,count=0;

   for(int i=1;i<1000;i++)
   { sum=count=0;  
    temp=i;
      while (temp)
      {
        count++;
        temp/=10;
      }
      temp = i;
      while(temp)
      {
        rem = temp%10;
        sum = sum+ floor(pow(rem,count));
        temp/=10;
      }
      //temp =i;
      if(i==sum)
       cout<<i<<"\t";
   }
    return 0;
}