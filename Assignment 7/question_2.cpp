//2. Write a program to print first N terms of Fibonacci series
#include<iostream>
using namespace std;
int main()
{
    int term,f0,f1,fn;
    cout<<"Enter number to print first N terms of Fibonnaci series:"<<endl;
    cin>>term;
    f0=0;f1=1;
    if(term<0)
     {
        cout<<"Error! Fibonnaci series term starts from 0"<<" Plz enter valid term"<<endl;
        return 0;
     }
     cout<<"First "<<term<<" of Fibonnaci series"<<endl; // term start from 0

     if(term>=0)
     {
        cout<<f0<<"\t"; //0th term = 0
        if(term>0)
         cout<<f1<<"\t";

     }
      
    for(int  i =2;i<=term;i++)
    {
        fn = f0+f1;
        cout<<fn<<"\t";
        // f1 ka value f0 me assign kr diye fir f1 me fn ka value assign kr diye
        f0 =f1;
        f1 = fn;
    
    }
    
    return 0;
}
// Dono program ka logic maine khud se likha hai
/* first nth term of fibonnaci series 
Agr hum ye logic use krte hai to hume 0th term ya 1th term k liye alag se condition use ni krna pdega 
dono program bilkul sahi hai but mujhe iska logic pasand aa rha hai

int main()
{
 int prev,current,next // next ko hum Fn bol skte hai
 prev=-1;   // -1 f(-2) ka value hai
 current =1; // 1 f(-1) ka value hai
 for(i=0;i<=term;i++)
 {
   next = prev+current;
   cout<<next<<"t";
   prev  = current;
   current = next;
 }
   
   return 0;
}
*/