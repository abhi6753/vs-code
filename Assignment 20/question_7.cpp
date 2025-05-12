// 7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include <iostream>
using namespace std;
int main()
{
    char str[20];
    char *ptr = str;
    int vowel, cons;
    vowel = cons = 0;
    cout << "Enter string: ";
    cin.getline(str, 20);
    for (int i = 0; *(ptr + i); i++)
    {
        if (*(ptr + i) == 'a' || *(ptr + i) == 'A' || *(ptr + i) == 'E' || *(ptr + i) == 'e' || *(ptr + i) == 'i' || *(ptr + i) == 'I' || *(ptr + i) == 'o' ||
            *(ptr + i) == 'O' || *(ptr + i) == 'U' || *(ptr + i) == 'u')
        {
            vowel++;
        }
        else
        {
            if ((*(ptr + i) >= 65 && *(ptr + i) <= 90 )||(*(ptr + i) >= 97 && *(ptr + i) <= 122))
            {
                if(*(ptr+i)!='a' ||*(ptr+i)!='A' ||*(ptr+i)!='e' ||*(ptr+i)!='E' ||*(ptr+i)!='i' ||*(ptr+i)!='I' ||\
                    *(ptr+i)!='O' ||*(ptr+i)!='o' ||*(ptr+i)!='u' ||*(ptr+i)!='U' )
                    {
                        cons++;
                    }
                else
                 continue;
            }
            else
             continue;
        }
    }
    cout<<"Vowels = "<<vowel<<endl<<"Consonent = "<<cons<<endl;
    return 0;
}