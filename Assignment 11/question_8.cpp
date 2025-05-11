// 8. Write a function to print PASCAL Triangle. (TSRN)

#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0||num==1)
     return 1;
    return num*fact(num-1);
}
int combination(int i,int j)
{
    return fact(i)/(fact(j)*fact(i-j));
}
void pascal(int row)
{
    bool key ;
    int r;
    for(int i =0;i<row;i++)
    {
        r =0;
        key = true;
        for(int j =0;j<=(row-1)*2;j++)
        {
            if(j>=(row-1)-i && j<=(row-1)+i && key )
            {
               cout<<" "<<combination(i,r++);
               key = false;
            }
            else
            {
                key = true;
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    float row;
    cout<<"Enter number of row want to print pascal triangle: ";
    cin>>row;
    if(row<0||row>(int)row)
    {
        cout<<"Error! please enter natural number"<<endl;
        goto exit;
    }
    pascal(row);
    exit:
    return 0;
    
}