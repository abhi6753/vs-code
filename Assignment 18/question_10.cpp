// 10. Write a function to find the repeated character in a given string.
#include<string>
#include<iostream>
using namespace std;
void printRepeatedCharacter(string str)
{
  
    bool flag = true;
    for(int i=0;str[i];i++)
    {
        for(int j=i+1;str[j];j++)
        {
            if(str[i]==str[j])
            {   if(flag == true)
                {
                    cout<<"Repeated characters : "<<endl;
                }
                cout<<str[i]<<endl;;
                str[j]=' ';
                flag = false;
            }
        }
    }
    if(flag)
    {
        cout<<"No characters are repeated"<<endl;
    }
}
int main()
{
    string str;
    cout<<"Enter string to count repeated character: "<<endl;
    getline(cin,str);
    printRepeatedCharacter(str);
    cout<<str;
   return 0;
}