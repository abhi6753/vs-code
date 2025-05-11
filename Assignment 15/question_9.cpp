// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include <iostream>
#include <algorithm>
using namespace std;
void sorting(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void mergeTwoArrays(int arr[], int size, int arr2[], int size2)
{
    int limit = size + size2;
    int k = 0;
    int temp[limit];
    for (int i = 0; i < size; i++)
    {
        temp[k++] = arr[i];
    }
    int j;
    for (int i = 0; i < size2; i++)
    {
        // ye loop hume btayega ki jo hum number ko insert krna chahte hai wo pahle v to insert ni hua hai agr hua hai to skip kr do
        for(j =0;j<k;j++) 
        {
            if(temp[j]==arr2[i])
            {
                limit--;

                break;
            }
        }
        if(j==k)
        temp[k++] = arr2[i]; // agr sirf array merging k hisab se dekhe to duplicate element v merge kiye jate hai uske liye sirf ye line kafi hai
    }                        // humne khud k man se aisa merge array bnaya hai jo ki duplicate element ko store n kre usey sirf ek baar hi store kre
    sorting(temp, limit);
    cout << "Array after merging: " << endl;
    printArray(temp, limit);
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
    int size2;

    cout << "How many numbers you want to store in second array: " << endl;
    cin >> size2;
    int arr2[size2];
    cout << "Enter " << size2 << " numbers: " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    sorting(arr, size);
    sorting(arr2, size2);
    mergeTwoArrays(arr, size, arr2, size2);

    return 0;
}