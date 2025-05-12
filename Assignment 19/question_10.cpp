// 10. Create an authentication system. It should be menu driven.

// Humne authentication system bnaya hai jisme phle valid admin hai ya ni usko check krega agr valid admin hai to fir
//  student name and his/her roll no. can added in student string
//  Note:: Humne admin array ko as a admin data base  mana hai jisme phle se hi valid admin username & password rakha hua hai
//  Hum studentData me jo v value lenge usey maan k chl rhe hai ki hum ek text file me rakh rhe hai
//  but hum file me rakhna tb sikhenge jab file handling padh lenge
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool student()
{
    int i = 0, num;
    bool flag = true;
input:
    cout << "Enter number of student: " << endl;
    cin >> num;
    if (num < 0)
    {
        cout << "Number of student sould be greater than 0" << endl
             << endl;
        goto input;
    }
    if (num == 0)
        flag = false;
    num *= 2; // double size ka array islie bnaye hai q ki hum student name and roll num of that student want to store
    fflush(stdin);
    string studentData[num];
    for (i = 0; i < num / 2; i++)
    {
        cout << "Enter name of student: ";
    name:
        getline(cin, studentData[i]);
        if (studentData[i].size() == 0)
            goto name;
        // I can add one more conditon student name allowed only alphabet characters
        cout << "Enter roll no. of student: ";
    roll:
        getline(cin, studentData[num / 2 + i]);
        if (studentData[num / 2 + i].size() == 0)
            goto roll;
        // I can add one more conditon student roll allowed only 0-9 character
    }
    if (flag == true)
    {
         cout << "\nStudent Data added successfully" << endl<<endl;
        return true;
    }
        
    {
        cout << "\nNo any stduent data added" << endl<<endl;
    }
    return false;
}

int main()
{
    int ch, i, attempt = 3;
    bool flag = false, id = false;
    int numOfUser = 3 * 2; // user 3 hi hai lekin hume unka password v store krwana hai isiliye double size ka array bna rhe
    string admin[numOfUser] = {"abhishek29073@gmail.com", "sonuk8314@gmail.com", "ramanujsharma256@gmail.com", "Abhishek@9155", "Vivek@9031", "Sharma@9771"};
    string user[2]; // user input to authenticate]
    cout << "\t\t\t\t\t\t\tAdmin Verification" << endl;
users:
    cout << "Enter user id: ";

    if (attempt != 3)
    {
        cout << "\t\t\t\t\t\t\tRemaining Attempt : " << attempt + 1;
    }
    cout << endl;
    getline(cin, user[0]); // input user id
    if (user[0].size() == 0)
    {
        goto users;
    }

    for (i = 0; i < numOfUser / 2; i++) // user id validation
    {
        if (user[0] == admin[i])
        {
            id = flag = true;
            attempt = 3;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Wrong user id" << endl
             << endl;
        if (attempt > 0)
        {
            attempt--;
            goto users;
        }
        else
        {
            cout << "Tried Timeout" << endl
                 << endl;
            goto option;
        }
    }
flag = false;
// password checking
pass:
        cout << "Enter password: " << endl;

    if (attempt != 3)
    {
        cout << "\t\t\t\t\t\t\tRemaining Attempt : " << attempt + 1 << endl;
    }
    getline(cin, user[1]);
    if (user[1].size() == 0)
    {
        goto pass;
    }
    for ( i = 0; i < numOfUser / 2; i++)
    {
        if (user[1] == admin[numOfUser / 2 + i])
        {
            cout << "\t\t\tAdmin id : " << user[0] << endl
                 << endl;
            flag = true;
        stud:
            student(); // this function will call when user id & password is mathced to database
           break;
        }
    }
    if (flag == false)
    {
        cout << "Wrong Password!" << endl<< endl;
        if (attempt > 0)
        {
            attempt--;
            goto pass;
        }
        else
        {
            cout << "Tried Timeout" << endl<< endl;
        }
    }

option:
    cout << "Do you want to exit : \n1. Yes \n2. No" << endl
         << endl;
    cout << "Enter your choice: ";

ch:
    cin >> ch;
    fflush(stdin);
    switch (ch)
    {
    case 1:
        break;
    case 2:
    {
        if (flag == true)
        {
            goto stud;
        }
        else
        {

            cout << "Sorry you've tried many time" << endl;
            cout << "Please try after some time" << endl;
            break;
        }
    }

    default:
        cout << "Error! please enter correct option" << endl
             << endl;
        goto ch;
    }
    return 0;
}