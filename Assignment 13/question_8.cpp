// 8. Write a recursive function to print first N terms of Fibonacci series
#include <iostream>
using namespace std;

void Fibonacci(int term)
{
    static int first = -1;
    static int last = 1;
    static int next = 0;
    if (term == 1)
    {
        cout << next;
        return;
    }
    Fibonacci(term - 1);

    first = last;
    last = next;
    next = last + first;
    cout << "," << next;
}
int main()
{
    float term;
    cout << "Enter value of N to print first N terms of fibonacci series: ";
    cin >> term;
    if (term > (int)term || term <= 0)
    {
        cout << "Error! Please enter natural number for value of N";
        goto exit;
    }
    Fibonacci(term);
exit:
    return 0;
}