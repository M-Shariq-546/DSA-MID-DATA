//Sparce array
#include<iostream>
using namespace std;
void funArr(int arr[] , int s)
{   
    int len =0;
    //Array initializes
    for(int i =0 ; i<s ; i++)
    {
        arr[i] = -9999;
    }
    arr[1] = 5;
    arr[3] = 4;
    arr[7] = 0;
    arr[9] = 6;

    for(int i =0 ; i<s ; i++)
    {
        cout<<arr[i]<<endl;
        if(arr[i] != -9999)
        {
            len++;
        }
    }
    cout<<"The Length of the array is : "<<len;
}
int main()
{
    int arr[10];
    const int size = 10;
    funArr(arr , size);
}