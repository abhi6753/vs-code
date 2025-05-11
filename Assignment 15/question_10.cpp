// 10. Write a function in C to count the frequency of each element of an array.
#include <iostream>
using namespace std;
void frequency(int arr[], int size)
{
    int count;
    int i, j, k,l=0;
    int temp[2][size];
    for (i = 0; i < size; i++) // traverse 0 to size-1 elements
    {   
        count = 1;
        for (k = 0; k < i; k++) // travers  temp array to check arr[i] already counted or not
        {
            if (arr[i] == temp[0][k]) // if already inserted in temp array then skip this element
            {
                break;
            }
        }
        if (k == i) //agr temp me arr[i] ka element ni hoga to ye true ho jayega
        {
            temp[0][l] = arr[i]; // insert unique element in temp array
            for (j = i + 1; j < size; j++) // agr element unique hai to wo arr[i] me kitne baar aaya hai
            {
        
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            temp[1][l]=count; // assign frequency of unique element
            l++; // l tavi increment ho jab unique element  assign ho temp array me
        }
      
    }
    cout<<"Elements: ";
    for(int i =0;i<2;i++)
    { 
        for(int j=0;j<l;j++)
        {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
        if(i==0)
        cout<<"Frequency: ";
    }

}
int main()
{
    int size;

    cout << "How many numbers you want to store in first array: " << endl;
    cin >> size;
    int arr[size];

    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    frequency(arr, size);
    return 0;
}