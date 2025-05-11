// 7. Write a function to check whether a given string is palindrome or not.
// eg. RACECAR
#include<iostream>
#include<string>
using namespace std;
bool strPalindrome(string str)
{
    string temp=str;
    int j= temp.length()-1;
   for(int i =0;str[i];i++)
   {
        if(str[i]!=temp[j--])
          return false;
   }
    return true;
}
int main()
{
    string str;
    cout<<"Enter string to check palindrome or not: "<<endl;
    getline(cin,str);
    strPalindrome(str)?cout<<"Palindrome string": cout<<"Not a palindrome string";
    return 0;
}