//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
        1 2 3 4 3 2 1
        1 2 3   3 2 1
        1 2       2 1
        1           1
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col,num;
    cout<<"Enter number of row: ";
    cin>>row;
    col = 2* row;
    for( int i =1 ;i<=row;i++)
    {
        num =0;
        for(int j  =1;j<col;j++)
        {
            if(j>row+1-i && j<row-1+i)
            {
                cout<<"  ";
            }
            else
            {
                if(j<=row)
                 {
                    num++;
                    cout<<" "<<num;
                 }
                 else
                 {
                    if(i==1)
                    cout<<" "<<--num;
                    else
                    cout<<" "<<num--;
                 }

            }
        
        }
        cout<<endl;
    }

    return 0;
}