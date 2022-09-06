#include<iostream>
using namespace std;
void dyna(int *a)
{
    for(int i =0 ; i<5 ; i++)
    {
        a = new int(7+i);
        cout<<*a<<endl;
        delete a;
    }
}
int main()
{
    int *a;
    dyna(a);
}