// 3. Write a function to sort an array of any size. (TSRS)
#include<iostream>
using namespace std;
void sort(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
       for ( int j = i+1; j < size; j++)
       {
           if(arr[i]>arr[j])
           {
            swap(arr[i],arr[j]);
           }
       }
       
    }

}
int main()
{
    int size;
    cout<<"How many numbers you want to sort: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" numbers: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sort(arr,size); // passing array into function
    cout<<"Number after sorting:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}