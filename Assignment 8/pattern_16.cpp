//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
              *
            *   *
          *       *
        *           *
      * * * * * * * * *
*/
#include<iostream>
using namespace  std;
int main()
{
    int row,col;
  
    cout<<"Enter number of rows: ";
    cin>>row;
    col = row*2;
    for(int i =1;i<=row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(j==row+1-i || j==row-1+i||i==row)
              cout<<" *" ;
            else
             cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}