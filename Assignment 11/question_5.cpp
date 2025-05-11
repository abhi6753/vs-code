// 5. Write a function to print first N prime numbers (TSRN)
#include <iostream>
using namespace std;
void First_N_PrimeNum(int num)
{
    bool key;
    cout << "2";

    int i = 2; // natural num;
    num--;// decrement kiye q ki humne first prime ko seprately print kra hai taki comma wla sahi se print ho sake
    while (num > 0)
    {
        i++;
        key = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                key = false;

                break;
            }
        }
        if (key == true)
        {
            cout << " , " << i;
            num--;
        }
    }
}
int main()
{
    float num;
    cout << "Enter value of N to print first N prime number: ";
    cin >> num;
    if (num <= 0 || num>(int)num)
    {
        cout << "Error! Please enter counting number" << endl;
        goto exit;
    }
    First_N_PrimeNum(num);
exit:
    return 0;
}