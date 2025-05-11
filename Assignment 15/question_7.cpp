// 7. Write a function in C to count a total number of duplicate elements in an array.
// aise kitne element hai jo 2 ya 2 se jadya  baar stored hai
#include <iostream>
using namespace std;

int countDuplicateElement(int arr[], int size)
{
    int frequency = 0, k = 0;
    for (int i = 0; i < size; i++) // iterate 0 to size -1
    {
        for (int j = i+1; j < size; j++) // check arr[0] == arr[1] equal or not
        {
            if (arr[i] == arr[j ])
            {
                for (k = 0; k < i; k++) // iterate 0 to i-1 to check arr[i] ko humne kahi pahle v check to ni kiya hai 
                {
                    if (arr[i] == arr[k])
                        break;
                }
                if (k == i)
                {
                    frequency++;
                    break;
                }
            }
        }
    }
    return frequency;
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
    count = countDuplicateElement(arr, size);
    cout << "Total duplicate elements = " << count << endl;
    return 0;
}