// 8. Write a function in C to print all unique elements in an array.
#include <iostream>
using namespace std;

void UniqueElement(int arr[], int size)
{
    int j =0,k=0;
   for(int i =0;i<size;i++)
   {
    for( j =i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            break;
        }
    }
    if(j == size)
    {
       for( k =0;k<i;k++)
       {
        if(arr[i]==arr[k])
           break;
       }
    }
    if(i==k)
     cout<<arr[i]<<" ";
   }
}
int main()
{
    int size, count;
    cout << "How many numbers you want to store: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Unique elements are: ";
    UniqueElement(arr, size);
   
    return 0;
}