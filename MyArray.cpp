#include<iostream>
using namespace std;
class MyArray
{   
    int *ar;
    const int CAPACITY; 
    int len =0;
    public:
        MyArray(int capacity) : CAPACITY(capacity)
        {
            ar = new int[capacity];
            //Initializing of array
            for (int i = 0; i < CAPACITY; i++)
            {
                ar[i] = -9999;
            }
            
        }
        int getCapacity()
        {
            return CAPACITY;
        }
        int getLenght()
        {
            return len;
        }
        bool isFull()
        {
            if(len == getCapacity())
            return true;

            return false;
        }

        bool insertAtLast(int x)
        {
            if(!isFull())
            {
                ar[len] = x;
                len ++;
                return true;
            }
            return false;
        }
        bool add(int x)
        {
            return insertAtLast(x);
        }
        bool insertAtBegin(int x)
        {
            if(!isFull())
            {
                for(int i=0 ; i<CAPACITY ; i++)
                {
                    ar[i+1] = ar[i];
                }
                ar[0] = x;
                len++;
                return true;
            }
            return false;
        }
        bool isEmpty()
        {
            if(isFull())
            {
                return false;
            }
            else{
                for (int i = 0; i < CAPACITY; i++)
              {
                  ar[i] = -9999;
              }
              return true;
            }
        }
        int getPosition(int p)
        {
            return ar[p];
        }
        bool doesExit(int x)
        {
            if(!isEmpty())
            for(int i=0 ; i<CAPACITY ; i++)
            {
                if(ar[i] == x)
                {
                    return true;
                }
            }
            return false;
        }
        void find(int x)
        {
            if(!isEmpty())
            {
                for(int i=0 ; i<CAPACITY; i++)
                {
                    if(ar[i] == x)
                    {
                        cout<<(i+1)<<endl;
                    }
                }
            }
        }
        void getFirstElement()
        {
            cout<< getPosition(0)<<endl;
        }
        void getLastElement()
        {
            cout<< getPosition(getLenght())<<endl;
        }
        void print()
        {
            for(int i=0 ; i<CAPACITY ; i++)
            {
                cout<<ar[i]<<" ";
            }
        }
};
int main()
{
    MyArray mar(5);
   // mar.add(40);
    cout<<mar.isEmpty()<<endl;
    mar.insertAtLast(4);
    mar.insertAtLast(7);
    mar.insertAtLast(79);
    if(mar.add(546))
    {
        cout<<"Successfully added"<<endl;
    }
    else{
        cout<<"Not Added";
    }
    mar.insertAtBegin(510);
    mar.getFirstElement();
    mar.getLastElement();
    cout<<mar.getLenght()<<endl;
    cout<<mar.isFull()<<endl;
    cout<<mar.isEmpty()<<endl;
    cout<<mar.doesExit(510)<<endl;
    mar.find(79);
    mar.print();
    return 0;
}