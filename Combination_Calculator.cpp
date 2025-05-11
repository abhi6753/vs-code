
#include <iostream>
using namespace std;
int fact(int num)
{

    int Fact = 1;

    for (int i = 2; i <= num; i++)
    {
        Fact = Fact * i;
    }
    return Fact;
}
float combination(int n, int r)
{
    // nCr = n!/(r!*(n-r)!) Combination formula

    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int n, r;
    cout << "********** Calculate combination ***********" << endl
         << endl;
    cout << "############################################" << endl
         << endl;
    cout << "Enter value of n & r respectively: ";
    cin >> n >> r;
    if (n < r)
    {
        cout<<"Error! please enter n >= r >= 0"<<endl;
        goto Return;
    }
    cout << "Combination = " << combination(n, r);
Return:
    return 0;
}