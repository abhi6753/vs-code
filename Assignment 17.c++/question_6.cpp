// 6. Write a program to reverse a string.
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
 {
    string str;
    cout<<"Enter string to reverse it: "<<endl;
    getline(cin,str);
    reverse(str.begin(),str.end());
    
    cout<<"Reverse string is : "<<str;
    return 0;
}
