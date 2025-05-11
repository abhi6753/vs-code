// 8. Write a function to count words in a given string
#include <iostream>
#include <string>
using namespace std;
int countword(string str)
{
    bool flag = false;// agr first character se pahle ek v white space nhi hai to flag false hi rahega
    int whitespace=0;
    int i;

    for ( i = 0; str[i];i++) // is iterator k help se jo v white space hai first character se pahle usey\
                                 count kr rhe hai or agr ek v character mil jayega to break kr rhe
    {                        // taki jis index se character start ho rha hai wha se hum 0 index pe string shift kr de
        if (str[i] == 32)
        {   
           whitespace++;
        }
        else
        { 
           break;
        }
        flag = true;   // agr first character se pahle ek v white space  hai to flag true ho jaye
    }
    if(i==str.length()) // agr i last index pe chla jaaye jaha pe null rkha hua hai mtlb ki pura string me white space nhi hai\
                        ek v character nhi hai isiliye 0 return kr rhe 
       return 0;

    if(flag == true) //Remove whitespace befor first character of string
    str = str.substr(whitespace,str.length()); // substr(position mtlb kis index se copy krna hai ,last kis index tak copy krna hai) \
                                              string shifting at 0 idndex
cout<<str<<endl;
        whitespace =0;
        for(int i =0;str[i];i++)
        {
            if(str[i]==32)
            {
                if(str[i+1]==32||str[i+1]=='\0')
                 continue;

                whitespace++; // 2 word k bich me ek whitespace hota hai isiliye white space count kr liye
            }
        }
        return whitespace+1; // jitne white space honge usse ek extra word hoga
}
int main()
{
    int count = 0;
    string str;
    cout << "Enter string to count words in it: " << endl;
    getline(cin, str);
    count = countword(str);
    count ? cout << count << " word in entered string." : cout << "0 word in entered string" << endl;

    return 0;
}