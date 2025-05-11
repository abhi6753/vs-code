//10. Write a program in C to copy the elements of one array into another array.Take array\
values from the user.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"How many number you want to store : ";
    cin>>size;
   
    int arr[size],arr2[size];
    cout<<"Enter "<<size <<" numbers: "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
      
    
    }
    
    cout<<"Elements of 2nd array: "<<endl;
    for(int i =0;i<size;i++)
    {
       arr2[i] = arr[i];
        cout<<arr2[i]<<" ";
    
    }
    return 0;
}