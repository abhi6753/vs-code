// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<iostream>
using namespace std;
void Swap(char *a,char*b,int size)
{
 
   char temp[size];
   int i;
  for( i =0;*(a+i);i++)
  {
    *(temp+i) = *(a+i);

  }
  *(temp+i) = '\0'; // equivalenet to temp[i]
  
  for( i=0;*(b+i);i++)
  {
    *(a+i) = *(b+i);
  }
  *(a+i)='\0'; // equivalent to a[i]
  for ( i = 0; *(temp+i); i++)
  {
    *(b+i)=*(temp+i);
  }
  *(b+i)='\0';
}
int main()
{
    char a[100],b[100];
    cout<<"Enter first string : "<<endl;
    cin.getline(a,sizeof(a));
    cout<<"Enter second string : "<<endl;
    cin.getline(b,sizeof(b));
    cout<<"String Before Swapping"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    Swap(a,b,100);
    cout<<"String After Swapping"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    return 0;
}