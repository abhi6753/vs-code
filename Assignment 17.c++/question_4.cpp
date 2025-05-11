//4. Write a program to convert a given string into uppercase
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main()
{
    string str;
    cout<<"Enter string to convert into upper case: "<<endl;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str;
    return 0;
}

    