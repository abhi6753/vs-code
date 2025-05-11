//17. Write a program which takes the length of the sides of a triangle as an input. Display\
whether the triangle is valid or not.
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter sides of triangle to check triangle is valid or not: ";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
      cout<<"Valid Triangle";
    }
    else
    {
        cout<<"Invalid triangle";
    }
    return 0;
}