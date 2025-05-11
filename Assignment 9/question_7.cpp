/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.

For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit

An additional surcharge of 20% is added to the bill.
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float kwh; // killo watt hour is used for billing electricity
    float total_bill = 0;
    bool key = false;
input:
    cout << "Enter consumption: ";
    cin >> kwh;
    // To clear input buffer use both these function;
    cin.clear();
    fflush(stdin);

    if (!(kwh > 0))
    {
        cout << "Please try again" << endl
             << "Kwh value should be possitive number" << endl;
        goto input;
    }
    switch (kwh <= 50)
    {
    case 1:
    {
        total_bill = kwh * 0.5;
        break;
    }
    case 0:
    {
        switch (kwh <= 150)
        {
        case 1:
        {
            total_bill = 25 + (kwh - 50) * 0.75;
            break;
        }
        case 0:
            switch (kwh <= 250)
            {
            case 1:
                total_bill = 100 + (kwh - 150) * 1.20;
                break;
            case 0:

                total_bill = 220+ (kwh - 250) * 1.20;
                break;
            }
        }
    }
    }

    total_bill += (total_bill * 20) / 100.0;
    cout << "Total Amount: Rs" << total_bill;

    return 0;
}