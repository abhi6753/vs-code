// Rotation of array using juggling algorithm
#include <iostream>
using namespace std;
int gcd(int size,int d)
{  // let size is a smaller number & d is greater thand size
    if(size>d)
    {
        swap(size,d);
    }
    int rem=1,temp=0;
    while(d%size!=0)
    {
        temp = d;
       d = size;
       size = temp%size;
    }
    return size;
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void rotatearray(int arr[],int size,int d)
{ int temp;
    int hcf,j,k;
     d = d%size; // To handle if d >= n
    hcf = gcd(size,d);
  
    for(int i =0;i<hcf;i++)
    {    j = i;
          temp = arr[i];
          while(true)
          {
              k = j+d;
              if(k>=size)
              {
                  k = k-size;
              }
              if(k==i)
              {
                  break;
              }
               arr[j] = arr[k];
            j = k;
          }
           arr[j] = temp;
    }
    printArray( arr,  size);
}
int main() {
    int size,d;// d is number of rotation of element form last end
    cout<<"How many number you want to store: ";
    cin>>size;
   int arr[size];
   cout<<"Enter "<<size<<" numbers: ";
   for(int i =0;i<size;i++)
   {
       cin>>arr[i];
   }
   cout<<"Enter value of d : ";
   cin>>d;
   rotatearray(arr,size,d);

    return 0;
}