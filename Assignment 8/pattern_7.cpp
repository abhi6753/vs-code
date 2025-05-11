//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
         * * * * * * * * * *
         * * * *     * * * *
         * * *         * * * 
         * *             * *
         *                 *
*/
#include<iostream>
using  namespace std;
int main()
{
    int row,col;
    cout<<"Enter number of rows: ";
    cin>>row;
    col =row*2;
    for(int i =1;i<=row;i++)
    {
        for(int j =1;j<=col;j++)
        {
            if(j>row-(i-1)&&j<row+i)  // sabse phle dimag me aaya saare row and col pe star print ho jaye 
                                     // fir jaha pe star ni print krwana uska logic socho 
            {
                cout<<"  ";
            }
            else
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}