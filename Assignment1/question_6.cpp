// WAP to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar”
#include <iostream>
using namespace std;
//#include<string.h>
//#include<string>
int main()
{
    string name;
    char full_name[100];
    cout << "Enter your name: ";
    getline(cin, name); //This funtion is used to take full name in c++ for string data type
    // to use getline  for char array data type then use cin.getline(name,sizeof(name));
    // fgets(full_name,sizeof(full_name),stdin);// This funtion is used to take full name in c and c++, data type should be array type.
    cout << "\"Hello , " + name + "\""; // we an also use + when we write variable name
//    printf("%d, %d",name.size(),strlen(full_name));
    return 0;
}