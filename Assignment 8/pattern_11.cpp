//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
            A
          A B A
        A B C B A
      A B C D C B A 
    A B C D E D C B A        
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    char letter;
    cout<<"Enter number of row: ";
    cin>>row;
    col = 2*row;
    for(int i =1 ;i<=row;i++)
    {
        letter =64; // 65 'A' ka ASCII code hai but 64 '@' ka hai isiliye ek ka, store kiye hai taki proper 'A' print ho
        for(int j = 1;j<col;j++)
        {
            if(j>row-i && j<row+i)
            {
               if(j<=row)
                {
                    letter++;
                    cout<<" "<<letter;
                    
                }
                else
                {
                  letter--;
                  cout<<" "<<letter;

                }
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}