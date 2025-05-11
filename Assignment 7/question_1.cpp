// 1. Write a program to find the Nth term of the Fibonnaci series.
// Fibonnaci series kuch log 0 se start krte hai but kuch log 1 se start krte hai or prateek sir
// ne v btaya hai ki fibonnaci 1 se hi start krna chahiye lekin humne kafi fibonnai series k baare me serach kiya\
or hume har jagah fibonaci 0 se start hote  huye dikha or leetcode pe v dekha to usme v 0 se hi start kiya gya hai\
series ko

// series ka nth term 0 se count krte hai Note- " Series start hota hai 0,1,1,2,..
// series ka me jo  no. rhenge usey hum counting k trah hi ount krenge
//eg. first 20 fibonnaci series agr bolenge to 4181 hoga jo ki 19th term ka value hai 
//Hum -ve term ka v  fibonnaci series nikal skte hai but hume bs basic fiboncaci series bnaye jo ki \
+ve term ka value btayega

#include <iostream>
using namespace std;
int main()
{
    int term, F0, F1, Fn;
    F0 = 0;
    F1 = 1;
    cout << "Enter to find Nth term of the Fibonnaci series: ";
    cin >> term;
    if (term < 0)
    {
        cout << "Error! Plz. enter valid term" << endl
             << "Fibonnaci series term starts from 0" << endl;
        return 0;
    }
    cout<<"Nth term of Fibonnaci series is = ";
    if(term==0||term ==1)
    {
        if(term==0)
        cout<<F0;
        else
        cout<<F1;
        return 0;
    }
      
    for (int i = 2; i <=term; i++)
    {
        Fn = F0 + F1;

        F0 = F1;
        F1 = Fn;
        
    }
     cout<<Fn;
    
    return 0;
}
// Dono program ka logic maine khud se likha hai
/* nth term of fibonnaci series 
Agr hum ye logic use krte hai to hume 0th term ya 1th term k liye alag se condition use ni krna pdega 
dono program bilkul sahi hai but mujhe iska logic pasand aa rha hai

int main()
{
 int prev,current,next  // next ko hum Fn v bol skte hai
 prev=-1;   // -1 f(-2) ka value hai
 current =1; // 1 f(-1) ka value hai
 for(i=0;i<=term;i++)
 {
   next = prev+current;
   prev  = current;
   current = next;
 }
   cout<<next;
   return 0;
}

*/


/* find -ve nth term value of fibonnaci series
Logic for -ve term of fibonacci series
int prev,current,next,temp;
 cout << "Enter to find Nth term of the Fibonnaci series: ";
   cin>>term;
   temp = -term;
prev = current = 1;
for(i=0;i<=temp;i++)
{
  next = prev - current;
  prev = current;
  current = next;
}
  cout<<next;

*/