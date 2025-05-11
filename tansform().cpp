
#include<iostream>
using namespace std;
#include<string>
#include<string.h>
#include<algorithm>
int main()

// Array of string  conversion upper case to lower case store it in another array of string variable
{   int size =3;
    string str[size];
    string st[size];
    cout<<"Enter "<<size<<"strings: "<<endl;
    for(int i=0;i<size;i++)
    {
        getline(cin,str[i]);
    }
    for(int i=0;i<size;i++)
    {
        transform(str[i].begin(),str[i].end()+1,st[i].begin(),::toupper);
    }
    cout<<endl<<"String in upper case \n"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<&st[i][0]<<endl;
    }
    return 0;

// string conversion upper case to lower case and store it in another string datatype variable
    string str1,str2;
    cout<<"Enter your name: ";
    getline(cin,str1);
    transform(str1.begin(),str1.end()+1,str2.begin(), :: tolower);
    cout<<&str2[0];
    return 0;

}