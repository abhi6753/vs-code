// 9. Write a program to check whether a given number is an Armstrong number or not
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  //NOTE: 153 is armstrong no. but mera compiler usey armstrong ni bta rha hai\
   q ki jb pow(5,3) function chl rha hai to 125 n dekr 124 hi produce kr rha isiliye galat ans aa rha\
   baki case me saare sahi hai same code online compiler pe run kie to ans sahi aa rha 153\
   ko v armstrong no. bta pa rha hai
   //Is issue ko fi krne k lie hume pow() ko floor() k under use krna hoga or ye sahi work kr rha
   // floor() roundoff krta hai 86.665 then floor k help se hume bs 86 milega
   // ceil() e v round off hi krta hai lekin 86.665 ko 87 bna dega
    int num, sum = 0, temp_num;
    short countDigit = 0, rem;
    cout << "Enter +ve integer to check is an Armstrong number or not: " << endl;
    cin >> num;
    if (num <= 0)
    {
        cout << "Error! Plz. enter +ve integer" << endl;
        return 0;
    }
    temp_num = num;
    while (temp_num) // this condition is used to count digit
    {

        countDigit++;
        temp_num /= 10;
    }
    temp_num = num;
    while (temp_num) // this condition is used to check number is armstrong or not
    {
        rem = temp_num % 10;
        sum = floor (pow(rem, countDigit))+sum;; //if we use two terminator then compiler smajhta hai ki
        //dusra line ka terminator hai us line me kuch ni likha hua hai\
        koi error ni aayega lekin best practice me ni aata hai
        temp_num /= 10;
    }

    if (num == sum)
    {
        cout << num << " is an armstrong number" << endl;
    }
    else
        cout << num << " is not an armstrong number" << endl;
    return 0;
}