// 10. Write a program to reverse a given number
#include <iostream>
using namespace std;
int main() {
   int num,temp_num,count=0,rem,new_num=0,i=1;
   cout<<"Enter integer to reverse it: ";
   cin>>num;
   temp_num = num;
   while(temp_num)
   {
       rem = temp_num%10;
       temp_num/=10;
       new_num=new_num*10+rem;
   }
   cout<<"Actual number = "<<num<<endl<<"Reverse number = "<<new_num<<endl;
    return 0;
}