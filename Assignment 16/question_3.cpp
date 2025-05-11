// 3. Write a program in C to find the transpose of a given matrix.

#include<iostream>
using namespace std;
  const int Size=3; // global variable
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
void transpose(int arr[][Size],int arr1[][Size])
{
    
    for(int i =0;i<Size;i++)
    {
        for(int j =0;j<Size;j++)
        {
            arr1[j][i]=arr[i][j];
        }
    }
}
void printMatrix(int arr[][Size])
{
    for(int i =0;i<Size;i++)
    {
        for(int j =0; j<Size;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
}
int main()
{
    
   
  //  scanf("%d",&Size);

    int arr[Size][Size];
     int arr1[Size][Size];
    cout<<"Enter "<<Size*Size<<" elements of first matrix: "<<endl;
    input(arr);
 transpose(arr,arr1);
 cout<<"Transpose of given matrix:"<<endl;
 printMatrix(arr1);
    return 0;
}