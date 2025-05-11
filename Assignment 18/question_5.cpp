// 4. Write a function to transform string into lowercase
#include<iostream>
using namespace std;
#include<string>
string lowercase(string str)
{
    for(int i =0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]+=32;
        }
    }
    return str;
}
int main()
{
    string str;
    cout<<"Enter your string: ";
    getline(cin,str);
    str = lowercase(str); // hum chah rhe the direct actual argument me changes ho upppercase() k through
    cout<<"String in lower case:\n"<<str;
    return 0;
}