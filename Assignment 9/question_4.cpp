/*
    4. Write a menu driven program with the following options:
      a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
      b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
      c. Check whether a given set of three numbers are equilateral triangle or not
      d. Exit
*/

#include <iostream>
using namespace std;
int main()
{

  short num;
  char ch;
  float a, b, c;
  bool key = false;
option:
  cout << " a. Check whether a given set of three numbers are lengths of an isosceles triangle or not" << endl;
  cout << " b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not" << endl;
  cout << " c. Check whether a given set of three numbers are equilateral triangle or not" << endl;
  cout << " d. Exit" << endl;

  cout << "Enter one option of them: ";
  cin >> ch;
  cin.clear();
  fflush(stdin);
  if(!(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='A'||ch=='B'||ch=='C'||ch == 'D'))
  {
    cout<<endl<<"Please Enter valid option"<<endl<<endl;
    goto option;
  }

same:
  cout << "Enter three sides of triangle: ";
  cin >> a >> b >> c;
  cin.clear();
  fflush(stdin);

  if(a>0&&b>0&&c>0)
  key = true; //flag;
  else
  {
   cout<<"Triangle side should be +Ve number"<<endl;
   goto same;
  }
  switch (ch)
  {
  case 'a':
  {
    if (a == b || b == c || c == a)
      cout << "Isosceles triangle" <<endl<< endl;
    else

      cout << "Not Isosceles triangle"<<endl << endl; 
      // hum pahle har ek case k uder condition likhe but isse prbml hoga ki compile time jadya lagega 
      // to humne dekha ki saare case me condition same lagana pad rha to fir hum use common condition bna kr bahar likh diye
    
    // jump1:
    //   cout << "Do you want to exit " << endl;
    //   cout << "1. YES " << endl
    //        << "2. NO" << endl;
    //   cin >> num;

    //   if (num == 2)
    //   {

    //   jump2:
    //     cout << "Do you want to check same triangle" << endl;
    //     cout << "1. YES " << endl
    //          << "2. NO" << endl;
    //     cin >> num;
    //     if (num == 1)
    //       goto same;
    //     else if (num == 2)
    //       goto option;
    //     else
    //     {
    //       cout << "Error! Plz.. enter valid option" << endl;
    //       goto jump2;
    //     }
    //   }
    //   else if (num == 1)
    //     break;
    //   else
    //   {
    //     cout << "Error! Plz.. enter valid option" << endl;
    //     goto jump1;
    //   }
    break;
  }
  case 'b':
  {
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
      cout << "Right angle triangle"<<endl<<endl;
    else
      cout << "Not right angle triangle"<<endl<<endl;
    // jump3:
    //   cout << "Do you want to exit " << endl;
    //   cout << "1. YES " << endl
    //        << "2. NO" << endl;
    //   cin >> num;

    //   if (num == 2)
    //   {
    //   jump4:
    //     cout << "Do you want to check same triangle" << endl;
    //     cout << "1. YES " << endl
    //          << "2. NO" << endl;
    //     cin >> num;
    //     if (num == 1)
    //       goto same;
    //     else if (num == 2)
    //       goto option;
    //     else
    //     {
    //       cout << "Error! Plz.. enter valid option" << endl;
    //       goto jump4;
    //     }
    //   }
    //   else if (num == 1)
    //     break;
    //   else
    //   {
    //     cout << "Error! Plz.. enter valid option" << endl;
    //     goto jump3;
    //   }
    break;
  }
  case 'c':
  {
    if (a == b == c)
      cout << "Equilateral triangle"<<endl<<endl;
    else
      cout << "Not equilateral triangle"<<endl<<endl;
    // jump5:
    //   cout << "Do you want to exit " << endl;
    //   cout << "1. YES " << endl
    //        << "2. NO" << endl;
    //   cin >> num;

    //   if (num == 2)
    //   {
    //   jump6:
    //     cout << "Do you want to check same triangle" << endl;
    //     cout << "1. YES " << endl
    //          << "2. NO" << endl;
    //     cin >> num;
    //     if (num == 1)
    //       goto same;
    //     else if (num == 2)
    //       goto option;
    //     else
    //     {
    //       cout << "Error! Plz.. enter valid option" << endl;
    //       goto jump6;
    //     }
    //   }
    //   else if (num == 1)
    //     break;
    //   else
    //   {
    //     cout << "Error! Plz.. enter valid option" << endl;
    //     goto jump5;
    //   }
    break;
  }
  case 'd':
    goto outside;
  // default:
  // {
  //   cout << "Error! Please enter valid option"<<endl << endl;
  //   goto option;
  // }
  }

jump1:
  cout << "Do you want to exit " << endl;
  cout << "1. YES " << endl
       << "2. NO" << endl<<endl;
  cout<<"Enter one of them: ";
  cin >> num;
  cin.clear();
  fflush(stdin);
  if (num == 2)
  {

  jump2:
    cout << "Do you want to check same triangle" << endl;
    cout << "1. YES " << endl
         << "2. NO" << endl<<endl;
         cout<<"Enter one of them: ";
    cin >> num;
    cin.clear();
    fflush(stdin);
    if (num == 1)
      goto same;
    else if (num == 2)
      goto option;
    else
    {
      cout << "Error! Plz.. enter valid option"<<endl << endl;
      goto jump2;
    }
  }
  else if (num == 1)
    goto outside;
  else
  {
    cout << "Error! Plz.. enter valid option"<<endl << endl;
    goto jump1;
  }

outside:
  return 0;
}