#include<iostream>
using namespace std;
class Array
{
    int data[5];
    int max_size;
    int length;
public:
    Array()
    {
        length = 0;
        max_size = 5;
    }
    void insert_at_end()
    {
        if(length < max_size)
        {
            int value;
            cout<<"\nEnter the value: ";
            cin>>value;
            data[length] = value;
            length++;
        }
        else
        {
            cout<<"\nArray is full\n";
        }
    }
    void traverse()
    {
        if(length > 0)
        {
            cout<<"\nValues of array are\n";
            for(int i = 0; i < length; i++)
            {
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"\nNo value to traverse\n";
        }
    }
    void insert_at_specified()
    {
        if(length < max_size)
        {
            int index, value;
            cout<<"\nEnter the index position: ";
            cin>>index;
            if(index >= 0 && index <= length - 1)
            {
                for(int i = length - 1; i >= index; i--)
                {
                    data[i + 1] = data[i];
                }
                cout<<"\nEnter the value: ";
                cin>>value;
                data[index] = value;
                length++;
            }
            else
            {
                cout<<"\nInvalid index position\n";
            }
        }
        else
        {
            cout<<"\nArray is full\n";
        }
    }
};
int main()
{
    int ch;
    Array a;
    do
    {
        cout<<"\nEnter 1 to insert at end of array\n";
        cout<<"Enter 2 to insert at specified index in array\n";
        cout<<"Enter 3 to traverse the array\n";
        cout<<"Enter 4 to exit from program\n";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            a.insert_at_end();
            break;
        case 2:
            a.insert_at_specified();
            break;
        case 3:
            a.traverse();
            break;
        case 4:
            exit(0);
        default:
            cout<<"\nWrong choice entered\n";
        }
    }while(true);
}
