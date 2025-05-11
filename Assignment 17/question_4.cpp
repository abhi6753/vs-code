// 4. Write a program to convert a given string into uppercase
#include<iostream>
using namespace std;
#include <string.h>
#include<algorithm> // transfor() declaration 
int main()
{
	char str[50] ;
	cout<<"Enter string to conert into Upper Case: "<<endl;
    cin.getline(str,sizeof(str));
   // cout<<strupr(str); // // It does not gives error while it is running on windows machine but is function ko\
   hume sir C lang me hi use krna chahiye waha koi redline issue nhi aata hai. Hume transform() ka use krna chahiye c++ me
   transform(str,&str[strlen(str)-1],str,::toupper); // best function to  convert into lower to upper case in c++
   cout<<str;
	return 0;
}