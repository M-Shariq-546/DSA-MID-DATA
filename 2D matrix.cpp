#include<iostream>
using namespace std;
void Mat2d(int row , int col)
{
        //Creating array in heap
    int **arr = new int*[row];
    for(int i=0 ; i<row ;i++)
    {
        arr[i] = new int[col];
    }
    //Inserting the values
    cout<<"Insert the Elements : ";
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin>>arr[i][j];
        }
    }
    //Display the Matrix
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<"Matrix oritentaion"<<"["<<i<<"]"<<"["<<j<<"]"<<arr[i][j]<<"\n";
        }
    }
    cout<<endl;
}
int main()
{
    int row;
    int col;
    cout<<"Enter the number of rows of Matrix : ";
    cin>>row;
    cout<<"Enter the number of colomn of Matrix : ";
    cin>>col;
    Mat2d(row , col);
}