// 7. Write a program in C to print or display the lower triangular of a given matrix.
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
void LowerTriangular(int arr[][Size])
{
    bool flag;
    for(int i =0;i<Size;i++)
    {
         flag = true;
        for(int j=i+1;j<Size;j++)
        {
            if(arr[i][j]==0)
            {
                continue;
            }
            else
             {
                flag = false;
                break;
             }
        }
        if(flag==false)
        break;
    }
    if(flag == false)
     cout<<"All the element above the main diagonal is not 0"<<endl;
    else
      {
        for(int i =0;i<Size;i++)
        {
            for(int j =0;j<=i;j++)
            {
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
      }
}
int main()
{
    int arr[Size][Size];
    cout<<"Enter "<<Size*Size<<" elements of matrix: "<<endl;
    input(arr);
    cout<<endl<<"Lower Triangular of entered Matrix"<<endl;
   LowerTriangular(arr);

    return 0;
}