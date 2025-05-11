//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<iostream>
using namespace std;
 const  int Size=3; // global variable
void input(int arr[][Size]) // 2D array ka first subscript khali chod skte hai lekin 2nd subscript enter krna jruri hai
{
    for(int i=0;i<Size;i++)
    {
        for(int j =0;j<Size;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void product(int arr[][Size],int arr2[][Size],int arr3[][Size])
{
   
    for(int i =0;i<Size;i++)// iterate for row
    {
      
        for(int j=0;j<Size;j++) // iterate col
        {
            arr3[i][j]=0;
            for(int k =0 ;k<Size;k++) // iterarte on element 
            {
               arr3[i][j]=arr3[i][j]+ arr[i][k]*arr2[k][j];
            }

        }
       
    }
}
void printMatrix(int arr[][Size])
{
    for(int i =0;i<Size;i++)
    {
        
        for(int j =0; j<Size;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    
   
  //  scanf("%d",&Size);

    int arr[Size][Size];
    int arr2[Size][Size];
    int arr3[Size][Size];
    cout<<"Enter "<<Size*Size<<" elements of first matrix: "<<endl;
    input(arr);
    cout<<"Enter "<<Size*Size<<" elements of second matrix: "<<endl;
    input(arr2);


 product(arr,arr2,arr3);
 cout<<"Product of two "<<Size<<" * "<<Size<<" matrix"<<endl;
 printMatrix(arr3);
    return 0;
}