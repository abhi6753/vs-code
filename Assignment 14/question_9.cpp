//9. Write a program in C to read n number of values in an array and display it in reverse\
order. Take array values from the user.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"How many number you want to display in reverse: ";
    cin>>size;
   
    int arr[size];
    cout<<"Enter "<<size <<" numbers: "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    
    }
    cout<<"Enter number in reverse order: "<<endl;
    for(int i =size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    
    }
    
    
    return 0;
}