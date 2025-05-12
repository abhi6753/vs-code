// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <iostream>
using namespace std;
void input(int *num, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(num + i);
        // scanf("%d",num+i);// if we taking input using scanf then we pass address
    }
}
void sorting(int *num, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (*(num + i) > *(num + j))
            {
                *(num + i) = *(num + i) ^ *(num + j);
                *(num + j) = *(num + i) ^ *(num + j);
                *(num + i) = *(num + i) ^ *(num + j);
            }
        }
    }
}
int main()
{
    int size = 0;
    cout << "How many number you want to enter: " << endl;
    cin >> size;
    if (size <= 0)
    {
        cout << "Try again! counting number starting from 1" << endl;
        return 0;
    }
    int num[size];
    input(num, size);
    sorting(num, size);
    cout<<"Number sorted: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << "\t";
    }
    return 0;
}