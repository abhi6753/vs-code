// 10. C program to finD all roots of a quaDratic equation using switch case
#include <iostream>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a, b, c, D, x, y;
    float Real_Part, Imaginary_Part;
    cout << "Enter coefficients a, b and c:\n";
    // scanf("%f%f%f",&a,&b,&c);
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "It is not quadratic equation\n";
        goto outside;
    }
    D = (b * b) - (4 * a * c); // discriminant
    switch (D > 0)
    {
    case 1:

        x = (-b + sqrt(D)) / (2 * a);
        y = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and different." << endl;
        printf("root1 =  %.2lf and root2 = %.2lf\n", x, y); // Real and distinct roots

        break;
    case 0:
        switch ((int)D == 0)
        {
        case 1:
            x = -b / (2 * a); // real and equal roots or zeros
            cout << "Roots are real and same." << endl;
            printf("root1 = root2 = %.2lf\n", x);

            break;
        case 0:

            Real_Part = -b / (2 * a);
            Imaginary_Part = sqrt(-D) / (2 * a);
            cout << "Roots are complex and different." << endl;
            if (Real_Part != 0)
            {
                cout << "Root 1 = " << Real_Part << "+" << Imaginary_Part << "i" << endl;
                cout << "Root 2 = " << Real_Part << "-" << Imaginary_Part << "i" << endl;
            }
            else
            {
                cout << "Root 1 = " << Imaginary_Part << "i" << endl;
                cout << "Root 2 = " << "-" << Imaginary_Part << "i" << endl;
            }
            break;
        }
        break;
    default:
        cout << "Invalid input\n";
    }
// getch();
outside:
    return 0;
}