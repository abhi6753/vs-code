// 7.(Top class Question) Write a program to print all Prime numbers between two given numbers
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1, num2, smallerNum;
    bool key1 = true, key2, key3 = true;
    // Key1 ka use kiye hai agr num1 ya num2 koi v -ve hoga to uske liye hum screen pe kya print kre
    // key2 // by-default hum maan k chl rhe hai ki number jo hai wo prime hai agr wo prime ni rhega to key2 me false aa jaye
    // key3 ka kaam hai ki agr ek v no. prime hai to fir niche ka condition sahi ni hone dena hai
    short i, j; // iterator variable
    cout << "Enter two +ve integer to print all prime number b/w them: ";
    cin >> num1 >> num2;
    if (num1 <= 0 && num2 <= 0) // if both no. is less than 0;
    {
        cout << "Error!, Plz.. enter +ve integer." << endl;
        return 0;
    }
    //  if((num1<0&&num2>=0) ||(num1>=0 &&num2<0)) // if one +ve and other is -ve
    if (num1 < 0 || num2 < 0)
    {
        if (num1 < 0)
        {
            cout << "Prime number b/w " << num1 << " and " << num2 << " : " << endl;
            num1 = 1;
            key1 = false;
        }
        else
        {
            cout << "Prime number b/w " << num2 << " and " << num1 << " : " << endl;
            num2 = 1;
            key1 = false;
        }
    }
    if (num1 == num2) // agar do no. same ai to uske bich me koi v prime no. ni hota hai
    {
        cout << "No prime number b/w them";
        return 0;
    }
    if (num1 > num2) // ye swapping kr k num1 me smaller number rkh denge or num2 me larger
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }
    smallerNum = num1;
    if (key1)
        cout << "Prime number b/w " << num1 << " and " << num2 << " : " << endl;
    for (i = 1; i < num2 - num1; i++)
    {
        key2 = true;
        smallerNum++;
        for (j = 2; j <= smallerNum / 2; j++)
        {
            if (smallerNum % j == 0)
            {
                key2 = false;

                break;
            }
        }
        if (key2 && smallerNum != 1) // agar key2 true hai and smallerNum me 1 ni hai to print kre
        {
            cout << smallerNum << "\t";
            key3 = false; // key3 ka kaam hai ki agr ek v no. prime hai to fir niche ka condition sahi ni hone dena hai
        }
    }
    if (i == 1 || (i >= num2 - num1 && key3 == true)) // agar first loop ek baar v ni chlta hai ya fir at the end jb i>=num2-num1 ho jayega to print kre
        cout << "No Prime no. b/w them" << endl;

    return 0;
}