//10. Write a function to print all prime factors of a given number. For example, if the\
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <iostream>
using namespace std;
int checkPrime(int num)
{
    bool key = true; // flag
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            key = false;
        }
    }
    if (num != 1 &&key == true)
    {
         return key;
    }
    else
    return key;
}
void primeFactor(int num)
{
    int temp_num = num;
    if (checkPrime(temp_num))
    {
        cout << "The prime factor of "<<temp_num<<" is " << temp_num << endl;
        return;
    }
    if (temp_num == 1)
    {
        cout << "It has no prime factor" << endl;
        return;
    }
    cout << "The prime factor of "<<temp_num<<" is " ;
    for (int i = 2; i <= temp_num ;i++)
    {
        
        if (temp_num % i == 0)
        {
            if (checkPrime(i) == true)
            {
                cout << i << " ";
                temp_num /= i;
                i = 1;
            }
               
        }
       
    }
   
}
int main()
{
    int num;
    cout << "Enter +ve intger: ";
    cin >> num;
    if (num <= 0)
    {

        cout << "Error! please enter +ve intger" << endl;
        if (num == 0)
            cout << "0 is neither +ve nor -ve" << endl;
        goto exit;
    }
    primeFactor(num);
exit:
    return 0;
}