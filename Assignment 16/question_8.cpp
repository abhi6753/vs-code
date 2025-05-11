//8. Write a program in C to print or display an upper triangular matrix.
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
void upperTriangular(int arr[][Size])
{
    bool flag;
    for(int i =1;i<Size;i++)
    {
         flag = true;
        for(int j=0;j<i;j++)
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
     cout<<"All the element below the main diagonal is not 0"<<endl;
    else
      {
        for(int i =0;i<Size;i++)
        {
            for(int j =0;j<Size;j++)
            {
                  if(j<i)
                  {
                    cout<<"  ";
                    continue;
                  }
            
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
    cout<<endl<<"Upper Triangular of entered Matrix"<<endl;
   upperTriangular(arr);

    return 0;
}