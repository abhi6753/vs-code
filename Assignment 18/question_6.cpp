// 6. Write a function to check whether a given string is an alphanumeric string or not.\
(Alphanumeric string must contain at least one alphabet and one digit)
#include<iostream>
using namespace std;
#include<string>
bool alphanumeric(string str)
{
    int count=0; // coutnt hume bta dega atleast one num and one alphabet\
     hai ya ni string me agr hoga to alphanumeric bolenge
    for(int i=0;str[i];i++)
    {
     
        if(str[i]>=48&&str[i]<=57)
        {
          count++;
        }
        if(str[i]>=65&&str[i]<=90 || str[i]>=97&&str[i]<=122)
         count++;
    }
    if(count>=2)
     return true;
     else
     return false;
}
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int i;
    for( i =0;str[i];i++)
    {
        if(str[i]!=32)
         break;
        
    }
    if(i==str.length())
    {
        cout<<"Please enter atleast one alphabet"<<endl;
        goto exit;

    }
    else
    {
        if(alphanumeric(str))
          cout<<"Alphanumeric string";
        else
          cout<<"Not alphanumeric string";
    }
  exit:
    return 0;
}