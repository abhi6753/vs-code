// 4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<iostream>
using namespace std;
int main()
{
    int num,sum;
    int *p = &num;
    int **q = &p;
    int ***r = &q;
    cout<<"Enter value of num: ";
    scanf("%d",**r); //scanf me hum jitna label  ka pointer bnate hai usse ek label ka pointer likhte hai
    cout<<***r<<endl;
    cin>>***r; //cin k sath hum jitne label ka pointer bnate hai utna hi label ka likhte hai;  
    cout<<***r<<endl;   
    sum = ***r+***r;
    cout<<sum;
    return 0;
}