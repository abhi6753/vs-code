//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// Sparse matrix means most element shold be zero

#include <iostream>
using namespace std;
const int Size = 3;
void input(int arr[][Size]) // 2D array ka first subscript khali chod skte hai lekin 2nd subscript enter krna jruri hai
                            // row and col ka value constant hona chahiye
{
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            cin >> arr[i][j];
        }
    }
}
bool CheckSparse(int arr[][Size])
{
    int nonzero =0,zero=0;
    for(int i=0;i<Size;i++)
    {
        for(int j =0;j<Size;j++)
        {
            if(arr[i][j])
             nonzero++;
            else
             zero++;
        }
    }
    if(zero>nonzero)
      return true;
    else
      return false;
}
int main()
{
    int arr[Size][Size];
    cout << "Enter " << Size * Size << " elements of matrix: " << endl;
    input(arr);

    if ( CheckSparse(arr))
    {
        cout << "Yes, It is a Sparse matrix";
    }
    else
    {
        cout << "No, It is not a Sparse matrix";
    }
    return 0;
}