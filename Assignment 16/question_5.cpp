// 5. Write a program in C to find the sum of left diagonals of a matrix.
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
int leftDiagonal(int arr[][Size])
{
    int sum=0;
    for(int i =0;i<Size;i++)
    {
        sum  += arr[i][i];
    }
    return sum;
}

int main()
{
    
   
  //  scanf("%d",&Size);

    int arr[Size][Size];

    cout<<"Enter "<<Size*Size<<" elements of first matrix: "<<endl;
    input(arr);
 int sum = leftDiagonal(arr); // left diagonal also called main diagonal
 cout<<"Sum of left diagonal of entered matrix = "<<sum;
    return 0;
}