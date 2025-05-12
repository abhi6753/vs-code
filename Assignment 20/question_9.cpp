// 8. Write a program to compute the sum of all elements in an array using pointers.
#include<iostream>
using namespace std;
int main()
{
    unsigned int size =5;
    int arr[5],sum=0;
    int* ptr = arr;
    cout<<"Enter "<<size<<" numbers :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>*(ptr+i);
        
    }
    cout<<"Entered numbers in reverse order:\n";
    for(int i=size-1;i>=0;i--)
    {
      cout<<*(ptr+i)<<' ';
    }
    
    return 0;
}