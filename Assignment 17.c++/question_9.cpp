//9. Write a C program to sort a string array in ascending order.
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<string.h>
int main()
{
    int size;
    cout<<"How many string you want to store: ";
    cin>>size;
    fflush(stdin);

    string str[size];
    string str1[size];
    cout<<"Enter "<<size<<" strings\n\n";
    for(int i =0;i<size;i++)
    {
        getline(cin,str[i]);
        transform(str[i].begin(),str[i].end()+1,str1[i].begin(),:: tolower); // ++1 end address me isilie kiye hai\
                     q ki hum new array of string me string store krwa rhe hai to wha pe pahle se garbage value hai
    }
   /* for(int i =0;i<size;i++)
    {
       transform(str[i].begin(),str[i].end()+1,str1[i].begin(),:: tolower);
      //transform(&str[i][0],&str[i][strlen(&str[i][0])],&str[i][0],::tolower); //dono same chij hai bas likhne ka tarika alag hai
    
    }*/
    string temp; //it will use when we use swap 2nd or third method
    cout<<"\nSorted in dictonary order: "<<endl;
    for(int i =0;i<size;i++)
    {
     for(int j=i+1;j<size;j++)
     {
        if(strcmp(&str1[i][0],&str1[j][0])==1)
        {
            //str1[i].swap(str1[j]); // e tavi kaam kr rha jb hum lowercase bna rhe to same hi arra of string me string rakhe

            //  strcpy(&temp[0],&str1[i][0]);
            //  strcpy(&str1[i][0],&str1[j][0]);
            //  strcpy(&str1[j][0],&temp[0]);

            //    hum tino tarika se string swap kr skte hai
        
            temp = &str1[i][0];
            str1[i]=&str1[j][0];
            str1[j]= &temp[0];

        }
     }
     cout<<&str1[i][0]<<endl;
    }
    return 0;
}