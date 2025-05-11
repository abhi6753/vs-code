// 3. Write a function to compare two strings.
#include <iostream>
using namespace std;
#include <string>
#include<algorithm>
int strcompare(string str, string str1)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] > str1[i] && str1[i] != '\0')
            return 1;
        else if (str[i] < str1[i] && str1[i] != '\0')
            return -1;
        else if (str[i] == str1[i])
            continue;
    }
    if (str.length() > str1.length())
        return 1;
    else if (str.length() < str1.length())
        return -1;
    else
        return 0;
}
int main()
{
    string str;
    string str1;
    cout<<"Enter first string: ";
    getline(cin,str);
    cout<<"Enter second string: ";
    getline(cin,str1);
    cout<<strcompare(str,str1);

    // Arrange Array of string in Dictionary order
    /*
    int size;
    cout<<"How many words you want to sort: "<<endl;
    cin>>size;
    fflush(stdin);
    cin.clear();
    string str[size],str1[size];
    cout<<"Enter " + size <<"strings to arrange in dictonary order: "<<endl<<endl;
    for (int i = 0; i < size; i++)
    {
        getline(cin,str[i]);
        //str1[i]=str[i]; jab hume string lower case me kr k dusre string variable me\
         store krna chahte hai to usey usi time assign kr de
        transform(str[i].begin(),str[i].end(),str[i].begin(),::tolower);
    }

    cout<<endl<<"Strings arranged in dictonary order: "<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j =i+1;j<size;j++)
        {
            if(strcompare(str[i],str[j])==1)
            {
                str[i].swap(str[j]);
            }
        }
        cout<<str[i]<<endl;
    }
    */
    return 0;
}