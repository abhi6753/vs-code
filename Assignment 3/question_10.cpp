//Write a program which takes the cost price and selling price of a product from the\
user. Now calculate and print profit or loss percentage.
//Profit% = (sp-cp)*100/cp;
//Loss% = (cp-sp)*100/cp;
#include<iostream>
using namespace std;
int main()
{
    float cp,sp;
    cout<<"Enter Cost price: ";
    cin>>cp;
    cout<<"Enter Selling price: ";
    cin>>sp;
    cp<sp?printf("Profit = Rs.%.2f\nProfit%% = %.2f\n",sp-cp,(sp-cp)*100/cp):
    printf("Loss = Rs.%.2f\nLoss%% = %.2f\n",cp-sp,((cp-sp)*100)/cp);
    return 0;
}