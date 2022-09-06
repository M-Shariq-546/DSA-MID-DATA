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
    for(int i=0 ; i<s ; i++)
    {
        arr[i] = (1 + i);
    }
    for(int i =0 ; i<s ; i++)
    {
        cout<<arr[i]<<endl;
        if(arr[i] != -9999)
        {
            len++;
        }
    }
    cout<<"The Length of the array is : "<<len<<endl;
}
int main()
{
    int arr[10];
    const int size = 10;
    funArr(arr , size);
}