//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
          *
          * * 
          * * *
          * * * *
          * * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter number of row want to print: ";
    cin>>row;
    for(int i = 1;i<=row;i++)
    {
        for(int j = 1;j<=i;j++)
         {
            cout<<"* ";
         }
         cout<<endl;
    }
    return 0;
}