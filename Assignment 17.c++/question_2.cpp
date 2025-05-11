// 2. Write a program to count the occurrence of a given character in a given string.
#include<iostream>
using namespace std;
#include<string>
#include<string.h>
#include<conio.h>
#include<algorithm> // transfor() declaration
int main()
{
    
    string str;
    short frequency[123]={0}, count=0;
    cout<<"Enter String to count occurence of entered character: \n";
    getline(cin,str);

 
    //strlwr(&str[0]);  // convert upper to lower case but it shows redline on function 
    transform(str.begin(),str.end(),str.begin(),::tolower);
     int i,j;
    
    for( i =0;str[i];i++)
    {    count =1;
         if(str[i]==32)
         continue;
        for( j =i+1;str[j];j++)
        {
            if(str[i]==str[j])
            {
                frequency[str[i]]=++count;
                str[j]=' ';
            }
        }
        if(j==strlen(&str[0]))
        {
            frequency[str[i]]=count;
        }
    }
 

    cout<<"\nOccurence of characters:\n";
    for(i=97;i<123;i++)
    {
        if(frequency[i]!=0)
        cout<<(char)i<<" ==> "<<frequency[i]<<endl;
    }
    return 0;
}