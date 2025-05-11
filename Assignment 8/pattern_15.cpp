//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
      *
      * *
      *   *
      *     *
      * * * * *
*/
#include<iostream>
using namespace  std;
int main()
{
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;
    for(int i =1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j==row || i==row||j==row+1-i)
              cout<<"* " ;
            else
             cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}