//5. Write a program to convert a given string into lowercase
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<string.h>
int main()
 {
    string str;
    cout<<"Enter string to convert into lower case: "<<endl;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(), ::tolower);
        // str.begin() 2nd time jaha pe likhe hai to tansform() ko bta rhe ki isi function\
         me changes kr k store krna hum chahe to dusre string variable ka address pass kr skte hai
    cout<<str;
    return 0;
}
