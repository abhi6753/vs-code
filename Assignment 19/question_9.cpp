// 9. Write a program that asks the user to enter a username. If the username entered is\
one of the names in the list then the user is allowed to calculate the factorial of a\
number. Otherwise, an error message is displayed
#include <iostream>
#include <string>
using namespace std;
long double fact(long double num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * fact(num - 1);
}
int main()
{
    string str[] = {"abhishek29073", "babumig25", "neha6723", "bala7923", "monu9631"}; // username pre-stored
    string username; 
    inputUsername:                                                                  // user give its user id
    cout << "Enter username: " << endl;
    getline(cin, username);
    bool flag = false;

    for (int i = 0; i < username.size(); i++)
    {
        if (str[i] == username)
        {
            flag = true;
            break;
        }
    }
    int ch;
    while (true)
    {
      
        if (flag == true)
        {
            numinput:
            long double num, Fact=0;
           
            cout << "Enter +ve integer to calculate its factorial: " << endl;
            cin >> num;
            if (num==(int)num && num >=0)
            {
                Fact = fact(num);

            cout << "Factorial of " << num << " = " << Fact << endl<<endl;
            }
            else{
                cout<<"Error! please enter +ve integer\n\n";
                goto numinput;

            }
        }
        else{
            cout<<"Username not found"<<endl<<endl;
            goto ch;
            break;
        }ch:
        cout<<"Do you want to exit:\n1.Yes\n2.No\n\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        fflush(stdin);
        switch (ch)
        {
        case 1:
            flag =false;
            break;
        case 2: 
        {
             if(flag == true)
              goto numinput;
            else 
             goto inputUsername;
        }
        default:
             cout<<"Error! please enter correct choice(1 or 2)"<<endl<<endl;
            goto ch;
        }
        if(flag ==false)
        {
            cout<<"program closed\n";
             break;

        }
       
             
    }
    return 0;
}