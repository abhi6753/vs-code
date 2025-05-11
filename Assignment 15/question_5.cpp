//5. Write a function to find the first occurrence of adjacent duplicate values in the array.\
Function has to return the value of the element.
// first adjacente duplicate element btana hai
#include <iostream>
using namespace std;
int adjacentDuplicate(int arr[],int size)
{
    int i=0;
      for(;i<size;i++)
      {
         if(arr[i]==arr[i+1])
        {
            return i;
        }
    
      }
      return i;
}

int main()
{
    int size;
    cout << "How many numbers you want to store: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int i =adjacentDuplicate(arr,size);
    if(i<size)
    {
        cout<<"First occurrence of adjacent duplicate value in an array = "<<arr[i];
    }
    else
    {
        cout<<"No dupplicate value in an array";
    }
    return 0;
}