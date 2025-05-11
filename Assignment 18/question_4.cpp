// 4. Write a function to transform string into uppercase
#include<iostream>
using namespace std;
#include<string>
string uppercase(string str)
{
    for(int i =0;str[i];i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    return str;
}
int main()
{
    string str;
    cout<<"Enter your string: ";
    getline(cin,str);
    str = uppercase(str); // hum chah rhe the direct actual argument me changes ho upppercase() k through
    cout<<"String in upper case:\n"<<str;
    return 0;
}