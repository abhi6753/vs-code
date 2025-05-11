// 8. Write a program in C to copy one string to another string.
#include<iostream>
using namespace std;
#include<string>
//#include<string.h>
#include<algorithm>
int main()
{
    string str;
    string str2;
    cout<<"Enter Your string: "<<endl;
    getline(cin,str);
   // strcpy(&str2[0],&str[0]); // string.h function
    str2 = str.c_str(); // It return address of first index// time complexity = O(1); Auxillar space = O(1)
                //c_str() is member function of string class we should use to copy string from one to another in c++
  cout<<str2;
    return 0;
}