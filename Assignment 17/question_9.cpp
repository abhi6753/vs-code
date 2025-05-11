// 9. Write a C program to sort a string array in ascending order.
#include<iostream>
using namespace std;
#include<string.h>
#include<algorithm>
#include<string>
int main()
{
    int size;
    cout<<"How many string you want to enter: ";
    cin>>size;
    fflush(stdin);
    char str[size][50];
    
    cout<<"Enter "<<size<<" string: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin.getline(str[i],sizeof(str[i]));
    }
    char temp[50];
    for(int i =0;i<size;i++) // upper case to lowercase
    {
        transform(&str[i][0],str[strlen(str[i])-1],&str[i][0], ::tolower);
    }
    //transform(Begin address of ith element, end address of ith element,begin address of ith element,:: tolower )
   
    for(int i =0;i<size;i++)
    {
       // strlwr(str[i]);
        
        for(int j=i+1;j<size;j++)
        {
            if(strcmp(str[i],str[j])==1) // strcmp(second string ,first string)  then return 1 means in dictonary order
              {                                                                //     return 0 means same string
                                                                              //      return -1 means opposite to dictoanry order

                                        // strcmp(first string ,second string)  then return 1 means opposite to dictonary order
                                                                            //       return 0 means same string
                                                                           //        return -1 means in dictonary order
               strcpy(temp,str[i]);
               strcpy(str[i],str[j]);
               strcpy(str[j],temp);
            }
        }
    }
    cout<<"\nCities are in alphabetical order:\n\n";
    for(int i =0;i<size;i++)
    {
        cout<<i+1<<". "<<str[i]<<endl;
    }
    return 0;
}