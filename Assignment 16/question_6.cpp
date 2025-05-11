// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<iostream>
using namespace std;
const int Size =3 ;
void input(int arr[][Size]) // 2D array ka first subscript khali chod skte hai lekin 2nd subscript enter krna jruri hai
                            // row and col ka value constant hona chahiye
{
    for(int i=0;i<Size;i++)
    {
        for(int j =0;j<Size;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void rowSum(int arr[][Size])
{
    int sum1,sum2;
    for(int i =0;i<Size;i++)
    {
        sum1 =0;
        sum2=0;
        for(int j =0 ; j<Size;j++)
        {
            sum1+= arr[i][j];
            sum2+= arr[j][i];
        }
        cout<<endl<<"Sum of "<<i+1<<" row = "<<sum1<<endl;
        cout<<"Sum of "<<i+1<<" col = "<<sum2<<endl;
    }
}
int main()
{
    int arr[Size][Size];
    cout<<"Enter "<<Size*Size<<" elements of matrix: "<<endl;
    input(arr);
    rowSum(arr);

    return 0;
}