// 6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<iostream>
using namespace std;
int main()
{
    int size =5;
    int arr[size];
    cout<<"Enter "<<size <<" numbers: "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Numbers before sorting: "<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i =0;i<size;i++) // sorting algorithm
    {
        for(int j =i+1;j<size;j++)
        {
             if(arr[i]>arr[j])
             {
                swap(arr[i],arr[j]);
             }
        }
    }
    cout<<endl<<"Number after sorting: "<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}