#include<iostream>
using namespace std;
const int len = 5;
//pointer allocation
void incri(int arr[])
{
    int *ptr;
    ptr = arr;
    for(int i=0; i<len ; i++)
    {
        cout<<"The address of the : "<<ptr<<endl;
        cout<<"The value is : "<<*ptr<<endl;
        ptr++;
    }
    //delete ptr; just simply remove the delete pointer that causes the memory leakage in the program
}
//The Reverse pointer allocation
void decri(int arr[len])
{
    int *ptr;
    ptr = &arr[len -1];
    for(int i=len; i>0 ; i--)
    {
        cout<<"The address of the : "<<ptr<<endl;
        cout<<"The value is : "<<*ptr<<endl;
        ptr--;
    }
    //delete ptr;
}
int main()
{
    int arr[len] = {1 ,2  , 3, 4 , 5};
    cout<<"The Increment of pointer "<<endl;
    incri(arr);
    cout<<"The Decrement of pointer "<<endl;
    decri(arr);
    return 0;
}