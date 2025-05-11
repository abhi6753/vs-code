//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*  
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1 

*/

#include<iostream>
using namespace std;
int main()
{
    int row,col,num=1;
    cout<<"Enter number of row b/w [0-1] to print correct pattern: ";
    cin>>row;
    col = 2*row;
    for(int i =1;i<=row;i++)
    {
        num =0;
        for(int j =1;j<col;j++)
        {
            if(j>row-i && j<row+i)
            {
               if(j<=row)
               {
                num++;
                cout<<" "<<num;
                
               }
                else
                {
                    num--;
                    cout<<" "<<num;
                }
                 
            }
            else
             cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}