//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
        A B C D E F G F E D C B A
        A B C D E F   F E D C B A
        A B C D E       E D C B A
        A B C D           D C B A
        A B C               C B A
        A B                   B A
        A                       A
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    char ch;
    cout<<"Enter number of row: ";
    cin>>row;
    col = 2* row;
    for( int i =1 ;i<=row;i++)
    {
        ch =64;
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
                    ch++;
                    cout<<" "<<ch;
                 }
                 else
                 {
                    if(i==1)
                    cout<<" "<<--ch;
                    else
                    cout<<" "<<ch--;
                 }

            }
        
        }
        cout<<endl;
    }

    return 0;
}