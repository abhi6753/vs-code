//Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include<iostream>
using namespace std;
int main()
{
    int size =10,oddSum=0,evenSum=0;
    float avg;
    int arr[size];
    cout<<"Enter "<<size <<" numbers: "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<size;i++)
    {
        if(arr[i]%2) // odd num condition true
        {
            oddSum +=arr[i];
        }
        else // even num
        {
            evenSum+=arr[i];
        }
    }
    cout<<"Sum of all even numbers = "<<evenSum<<endl;
    cout<<"Sum of all odd numbers  = "<<oddSum<<endl;
    return 0;
}