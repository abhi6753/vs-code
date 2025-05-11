//1. Write a program to find the number of vowels in each of the 5 strings stored in two\
dimensional arrays, taken from the user.
#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
void input(string str[],int size)
{
    cout<<"Enter "<<size<<" strings: "<<endl;
    for(int i =0;i<size;i++)
    {
        getline(cin,str[i]);
    }
}
 int vowels( string str)
{
    int count =0;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        for(int i =0;str[i];i++)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                  count++;
        }
   return count;

}
int main()
{
    int size;
  
    cout<<"Enter number of string you want to enter: "<<endl;
    cin>>size;
     fflush(stdin);
    string str[size];
    int vowelsInstring[size];
    input(str,size);
    for(int i =0;i<size;i++)
    {
        vowelsInstring[i]= vowels(str[i]);
        cout<<str[i]<<'\t'<<"have "<<vowelsInstring[i]<<" vowels"<<endl;
    }
    return 0;
}