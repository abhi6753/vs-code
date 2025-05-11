// 4. Write a function to rotate an array by n position in d direction. The d is an indicative\
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and\
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

// left rotate krne ka matlb hai ki array ko left side sift kr do or  first se n elements ko array k last me add kr do

 // Right rotate krne ka matlab hai ki array ko right shift kr do or last se n elements ko array k suru me add kr do
#include <iostream>
#include<conio.h>
using namespace std;
void printArray(int arr[], int size);
void rotate(int arr[], int size, int pos, char direc) // time complexity O( n) //good method i created this logic myself
{
    
 // if pos == size then we get same aaray otherwise if pos is multiple of size then also get same array
    if(pos == size || pos%size==0) // is condition se hum check kr rhe ki jitna rotation bola hai agr utna krenge to kahi same aaray\
                                      to ni mil rha hai agr mil rha hai to simple return kr do or same array ko hi print kr do
    {
        cout<<"pos==size";
        return;
    }
    // When you rotate an array multiple times, the final result is the same as rotating it by the remainder\
       when the total rotation count is divided by the array size. For example,\
       rotating an array of size 5 by 7 positions is the same as rotating it by 2 positions (7 % 5 = 2).
    else
       pos =pos%size;
    int temp_arr[size]; 
    //Rotate array by Block swap mthod
    if (direc == 'l' || direc == 'L')
    {

        for (int i = 0; i < pos; i++) // store n elemnet in temp array from left side bcz array will shift to left side
        {
            temp_arr[i] = arr[i];
        }
        for (int j = 0, i = pos; i < size; i++, j++) // shifting elements to left side
        {
            arr[j] = arr[i];
        }

        int i = size - pos; //  assign elements after shifting which are kept in temp array
        for (int j = 0; i < size; i++, j++)
        {
            arr[i] = temp_arr[j];
        }
    }
    else
    {
        int j=0;
        for(int i =size-pos;i<size;i++,j++) // store n elemnet in temp array from right side bcz array will shift to left side
        {
            temp_arr[j]=arr[i];
        }

        for(int i =size-1;i>0;i--) // shifting elements to right side
        {
            arr[i]=arr[i-pos];
        }
        for(int i =0;i<pos;i++) //  assign elements after shifting which are kept in temp array
        {
            arr[i]=temp_arr[i];
        }
    
    }
}
// In this method we are using recursion
/*
void leftRotateByOne(int arr[],int size)
{
    int temp = arr[0];
    for(int i =0;i<size-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1]= temp;
}
void leftRotate(int arr[],int size,int pos,char dir)
{
    pos %=size;
    int i =0;
    while(i<pos)
    {
        leftRotateByOne(arr,size);
        i++;
    }

}*/

void printArray(int arr[], int size) // To print array
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    int position;
    char direction;
    cout << "How many numbers you want to enter: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "How many element you want to rotate: ";
    cin >> position; // d is the no. of element to rotate

    cout << "Enter direction: ";
    cin >> direction;
    
    if(direction !='L'&& direction !='l' && direction !='R'&&direction !='r')
    {
        cout<<"Error! plz.. enter valid direction left or right"<<endl;
        goto exit;
    }
    rotate(arr, size, position, direction); // rotation of array using for loop
    // leftRotate(arr,size,position,direction); // rotate array using recursion
    cout << "Array after rotated by " << position << " position is :" << endl;
    printArray(arr, size);
    exit:
    return 0;
}