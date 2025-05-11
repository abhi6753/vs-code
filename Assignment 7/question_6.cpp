// 6. Write a program to print all Prime numbers under 100
#include <iostream>
using namespace std;

int main()
{
    short num = 1, sr_num = 1;
    bool key;
    cout << "Prime number under 100" << endl
         << endl;
    cout << "Sr no.\tPrime no." << endl;
    for (int i = 1; i < 100 - 2; i++)
    {
        key = true;
        num++;
        for (int j = 2; j <= num / 2; j++)
        {
            if (num % j == 0)
            {
                key = false;
                break;
            }
        }
        if (key)
            cout << sr_num++ << "." << "\t" << num << endl;
    }
    return 0;
}