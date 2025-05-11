//7. Write a program to find second largest in an array.Take array values from the user.
#include<iostream>
using namespace std;
#include<limits.h>
int main()
{
    int size =1;
    int arr[size];
    int largest,s_largest;
    cout<<"Enter "<<size<<" numbers: "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
       
    }
    /* // humlog sorting k help se v second largest find kr skte hai lekin Time complexity of sorting O(log n) hota hai
    for (int i = 0; i < size; i++)
    {
       for(int j =i+1;j<size;j++)
       {
         if(arr[i]>arr[j])
          swap(arr[i],arr[j]);
       }
    }*/

    largest = s_largest =arr[0];
    for(int i =1;i<size;i++) // is trah se second largest find kiye to Time complexity O(n) me hi kaam ho gya
    {
        if(largest<arr[i])
        {
            s_largest = largest;
            largest = arr[i];
        }
       
    }
    if(size==2) // agar array me sirf 2 element rhega or arr[0]>arr[1]  se tb ye condition chlega
    {
        s_largest = arr[1];
    }
    cout<<"Second largest number = "<<s_largest;
    
    return 0;
}