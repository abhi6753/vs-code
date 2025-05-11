//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*

 * * * * * * * * *        
   * * * * * * * 
     * * * * * 
       * * *
         * 
   
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter nuber of rows to print pattern: "<<endl;
    cin>>row;
    col = row*2;
    for(int i = 1;i<=row;i++)
    {
        for(int j =1;j<col;j++)
        {
             if(j>=i && j<=row*2-i)
             cout<<" *";
             else
             cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}