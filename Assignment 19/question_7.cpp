// 7. From the list of IP addresses, check whether all ip addresses are valid.
#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
void input(string str[], int size) //Input method
{
    cout << "\nEnter " << size << " IP address: " << endl;
    for (int i = 0; i < size; i++)
    {
        getline(cin, str[i]);
    }
}
bool validateIPv4(string str)
{
    if(str.length()<7)  // in ipv4 minimum character hoga hi hoga 0.0.0.0
     return false;
    string temp = "";
    int countDot = 0;
    for (int i = 0; str[i]; i++)  //remove all whitespaces
    {
        if (str[i] != 32)
        {

            if (str[i] == '.')
                countDot++; // dot
            else if (countDot > 3)
            {
              return false;
            }
                
            temp = temp + str[i];
        }
    }
    if(temp.length()>15 || countDot!=3)  // Maxium character in valid IPv4 is 15 eg.   255.255.255.255
     return false;
    if (temp[temp.length()-1]>=48&& temp[temp.length()-1]<=57) // last index pe koi digit hona chahiye
    {                   

        // Valid: 192.168.1.1, 10.0.0.1, 255.255.255.255, 0.0.0.0
        // Invalid: 192.168.1.01, 192.168.1.256, 01.10.1.1
        string num;
    
        for (int i = 0; temp[i];i<temp.length()&&i++)
        {
            num ="";
            while (temp[i] != '.'&&i<temp.length())
            {
                if (!(temp[i] >= 48 && temp[i] <= 57))
                {
                    return false;
                }
                else
                {
                    num = num + temp[i];
                    i++;
                }
            }
            if(  stoi(num)>255) // stoi() convert string digit into int
            {
            
                return false;
            }
            if(num.size()>1)  // dot k phle jo v number hai wo valid hai ya ni
                              // 000 != 0 in ip address
                               // 010  != 10 in ip address
            {
                if(num[0]=='0')
                  return false;
            }
            
        }
    }
    else
     return false;

    return true; // agar koi v false condition ni chlega tb ye condition chlega
}
bool validateIPv6(string str)
{
    int countColon=0;
    string temp="";
    if(str.length()<15 ) // Min character in valid IPv6
    {
        return false;
    }
   
    for(int i =0;str[i];i++) // remove all whitespaces
    {
         if(str[i]!=32)
         {
            if(str[i]==':')
            countColon++;
            else if(countColon>7)
             return false;
            temp =temp+str[i];
         }
    }
    if(str.length()>39 ||countColon!=7 ) // Max character in valid IPv6 eg. ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff
      return false;

    if( (temp[temp.length()-1]>=48 &&temp[temp.length()-1]<=57 || temp[temp.length()-1]>='a'&&temp[temp.length()-1]<='f'||temp[temp.length()-1]>='A'&&temp[temp.length()-1]<='F'))
    {
         string num;
        
         for(int i=0;temp[i];i<temp.size()&&i++)
         {
            num ="";
            while(temp[i]!=':' && i<temp.length())
            {
                if(!(temp[i]>=48&&temp[i]<=57 || temp[i]>='A'&&temp[i]<'F'||temp[i]>='a'&&temp[i]<='f'))
                  {
                    return false;
                  } 
                else
                {
                    num = num+temp[i];
                    i++;
                }   
            }
            if(num.size()==0||num.size()>4) // 0000 == 0 true in IPv6
            {
                
                return false;
            }
          
         }
    }
    else
    return false;

    return true; //when valid ipv6 address
}
int main()
{
    int option;
    int size;
    cout << "Which IP adress you want to validate :" << endl
         << "1. IPv4\n2. IPv6\n";
    cout << "Enter number to select option: ";
    cin >> option;

    cout << "\nHow many IP address you want to validate: " << endl;
    cin >> size;
    if(size<=0)
    {
     return 0;
    }
    fflush(stdin);
    string str[size];
    input(str, size);
    bool flag;
    switch (option)
    {
    case 1:
    {
        for (int i = 0; i < size; i++)
        {
            if(validateIPv4(str[i]))
                cout<<"Valid IP adress"<<endl;
            else
                cout<<"Invalid IP adress"<<endl;
           
        }
        break;
    }
    case 2:
    {
        for (int i = 0; i < size; i++)
        {
             
            if(validateIPv6(str[i]))
                cout<<"Valid IP adress"<<endl;
            else
                cout<<"Invalid IP adress"<<endl;
        }
        break;

    }
    default:
        cout << "Error! You have entered wrong option.\n Plz... try again." << endl;
    }
    exit:
    return 0;
}