//1D Matrix
#include<iostream>
using namespace std;
void funArr(int arr[] , int s)
{   
    int len =0;
    //Matrix initializes
    for(int i =0 ; i<s ; i++)
    {
        arr[i] = -9999;
    }
    arr[1] = 5;
    arr[3] = 4;
    arr[4] = 8;
    arr[2] = 0;
    arr[0] = 6;
    for(int i =0 ; i<s ; i++)
    {
        cout<<arr[i]<<"\t";
        if(arr[i] != -9999)
        {
            len++;
        }
    }
    cout<<endl;
    cout<<"The elements of the martrix are : "<<len<<endl;
}
int main()
{
    int arr[5];
    const int size = 5;
    funArr(arr , size);
}