//Print this pattern
//Question me bs 5 row  ko print krne ko bola hai lekin hum genral program likh rhe taki sb input pe work kare
/*
         A B C D C B A
           A B C B A
             A B A
               A
*/
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    char ch;
    cout<<"Enter number of row : ";
    cin>>row;
    col = row*2;
    for(int i =1;i<=row;i++)
    {
        ch=64; // 64 is a ASCII cod of '@' condition true hoga niche first elese block ka to ch pahle increment hoga\
                                   then print hoga mtlb ch me 65 aa jayega
        for(int j = 1;j<col;j++)
        {
            if(j>=i && j<=col-i)
            {
                if(j<=row)
                  {
                    ch++;
                    cout<<" "<<ch;
                  }
                  else
                  {
                     ch--;
                     cout<<" "<<ch;
                  }
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
     return 0;
}