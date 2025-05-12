// 10. Write a program to print a string in reverse using a pointer
#include<iostream>
using namespace std;
void revers(char *str)
{
    if(*(str)=='\0')
      return;
    revers(str+1);
    cout<<str[0];
  
}
int main()
{
    unsigned int size =50;
    char str[size];
    char *ptr = str;
    cout<<"Enter string: ";
    cin.getline(ptr,size);
    cout<<"Reverse string: ";
  revers(ptr);
    return 0;
}