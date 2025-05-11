// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include<iostream>
using namespace std;
int main()
{
    int size =10,sum=0;
    float avg;
    int arr[size];
    cout<<"Enter "<<size <<" numbers: "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
        sum +=arr[i];
    }
    avg = sum/size;
    cout<<"Average of "<<size<<" numbers = "<<avg;
    return 0;
}