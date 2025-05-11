// 10. Write a program in C to find the row with maximum number of 1s.
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
int maxOneInRow(int arr[][Size])
{
    int count, max = 0;
    for (int i = 0; i < Size; i++)
    {
        count = 0;
        for (int j = 0; j < Size; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (max < count)
            max = i + 1;
    }
    return max;
}
int main()
{
    int arr[Size][Size];
    int rownum = 0;
    cout << "Enter " << Size * Size << " elements of matrix: " << endl;
    input(arr);

    rownum = maxOneInRow(arr);
    if (rownum)
    {
        cout << "Maximum one in row number " << rownum;
    }
    else
    {
        cout << "No 1's in entered matrix";
    }
    return 0;
}