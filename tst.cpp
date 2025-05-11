/*#include<stdio.h>
#include<math.h>
#include<conio.h>
//using namespace std;
 int main()
 {
    
    int num,sum=0,temp_num,power;
    short countDigit=0,rem;
    printf("Enter +ve integer to check is an Armstrong number or not: \n");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Error! Plz. enter +ve integer\n");
        return 0;
    }
    temp_num=num;
    while (temp_num)// this condition is used to count digit
    {
       // rem = temp_num%10;
       countDigit++;
        temp_num/=10;
       
    }

   // cout<<countDigit<<endl;
  //  getch();
    temp_num = num;
    while (temp_num) // this condition is used to
    {
        rem = temp_num%10;
        printf("Rem\n");
        printf("%hi\n",rem);
       // getch();
        printf("power\n");//<<endl;
        power = pow(rem,countDigit);
       // cout<<power<<endl;
        printf("%d\n",power);
        sum = sum + power;
        //cout<<"sum"<<endl;
        printf("sum\n");
        printf("%d\n",sum);
       // cout<<sum<<endl;
       // getch();
        temp_num/=10;
    }
    // cout<<sum<<endl;
    // getch();
    if(num==sum)
    {
       // cout<<num <<" is an armstrong number"<<endl;
       printf("Armstrong");
    }
    else
    // cout<<num<<" is not an armstrong number"<<endl;
    printf("Not Armstrong");

    return 0;
 }*/
/*
#include<iostream>
using namespace std;
#include<string>
#include<string.h>
void removeExtraWhitespace(string str)
{
  string word,sen="";
    for(int i =0;str[i];i++)
    {
        word ="";
        while(str[i]!=32&&i<str.length())
        {
          word = word+str[i];
          i++;
        }
        if(word.length()>0)
        sen = sen+" "+word;
    }
   sen = sen.substr(1);
   cout<<sen;
}
int main()
{
    string str;
    string str1;
    cout<<"Enter first string: ";
    getline(cin,str);
    //fflush(stdin);

    // cout<<strcmp(&str[0],&str1[0])<<endl;
    // cout<<str.compare(str1);
    removeExtraWhitespace(str);
//cout<<str;
    return 0;
}
    */
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string str[2][2]={"abhishek29073@gmail.com","sonuk314@gmail.com","Abhishek@9155","Vivek@26#"};
    // cout<<"Enter 2 user id : \n";
    // for(int i=0;i<2;i++)
    // {
    //     cout<<"Enter user id : ";
    //     for(int j=0;j<2;j++)
    //     {
    //       getline(cin,str[j][i]);
    //       if(j==0)
    //       cout<<"Enter Password: ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<2;i++)
    {
        cout<<"User id : ";
        for(int j=0;j<2;j++)
        {   
            cout<<str[j][i]<<endl;
        if(j==0) cout<<"Password : ";
        }
        cout <<endl;
    }
    return 0;
}

