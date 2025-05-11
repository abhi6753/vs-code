// 2. Write a function to calculate simple interest. (TSRS)
// SI = prinicipal*Rate*Time/100
#include <iostream>
using namespace std;
float timeinYear(short day, short month, float year)
{
    year += (float)month / 12 + (float)day / 365;
    return year;
}
float simpleIntrest(float principal, float rate, float time)
{
    return principal * rate * time / 100.0;
}
int main()
{
    float principal, rate, si;
    short day, month, year;
    float totalTime;
    cout << "Enter principal ammount: ";
    cin >> principal;
    cin.clear();
    fflush(stdin);
    if (principal >= 1)
    {
        cout << "Enter annual rate: ";
        cin >> rate;
        // cin.clear();
        // fflush(stdin);
        if (rate > 0)
        {
            cout << "Enter Time (day-month-year): ";
            cin >> day >> month >> year;
            // cin.clear();
            // fflush(stdin);
            if (!(day >= 1 || month >= 1 || year >= 1))
            {

                cout << "Error! Please try again" << endl
                     << "Minimum time interval should be 1 day" << endl;
                goto exit;
            }
        }

        else
        {
            cout << "Erro! Please enter +ve integer" << endl;
            goto exit;
        }
    }
    else
    {
        cout << "Erro! Please enter +ve integer" << endl;
        goto exit;
    }

    totalTime = timeinYear(day, month, year);
    si = simpleIntrest(principal, rate, totalTime);
    cout << "###################################" << endl
         << endl;
    cout << "Principal Ammount = " << principal << endl;
    cout << "Intrest rate = " << rate << endl;
    cout << "Time period = day-month-year" << endl;
    cout << "\t\t" << day << "   " << month << "   " << year << endl;
    cout << "Simple intrest = ";
    printf("%.2f\n", si);
    cout << "Toatl ammount = ";
    printf("%.2f\n", principal + si);
exit:
    return 0;
}
