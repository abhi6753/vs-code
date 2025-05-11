//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
                 *
               * * *
             * * * * *
           * * * * * * * 
         * * * * * * * * * 
           * * * * * * * 
             * * * * * 
               * * *
                 *  
*/
#include<iostream>
using  namespace std;
int main()
{
    int row,halfRow,k =0;
    cout<<"Enter number of  rows: ";
    cin>>row;
    halfRow = (row+1)/2;
    for(int i =1;i<=row;i++)
    {
        for(int j =1;j<=row;j++)
        {
            if(i<=halfRow)
            {
                if(j>halfRow-i && j<halfRow+i)
                  cout<<" *";
                else
                cout<<"  ";
            }
            else
            {
                if( j>i-halfRow && j<row-k)
                {
                    cout<<" *";
                   
                }
                else
                cout<<"  ";
               
            }
        }
        if(i>halfRow)
        k++;
        cout<<endl;
    }
    return 0;
}