#include<iostream>
#include<stdlib.h>
#define maxsize 100
using namespace std;

template<class T>
class queue
{
    private: int i;
    T arr_queue[maxsize],item;
    int rare=0;
    int front=0;
    public: void insert()
    {
        if(rare==maxsize)
        {
            cout<<"Max";
        }
        else{
            cout<<"Enter value: ";
            cin>>item;
            arr_queue[rare]=item;
            cout<<"\n postion is "<<rare<<endl<<"Inserted value "<<arr_queue[rare]<<endl;
            rare++;
        }}
    void removedata()
    {
        if(front==rare)
        {
            cout<<"Empty";
            front=0;
            rare=0;
        }
        else{
            cout<<"\nPosition "<<front<<"removed"<<arr_queue[front];
        front++;
        }
    }

    void display()
    {
        for (i = front; i < rare;i++)
        {
            cout<<"\n postion is "<<i<<" value "<<arr_queue[i]<<endl;

        }
    }
};
int main()
{
    int choice_exit_p=1;
    queue<int>obj;
    do{
        cout<<endl<<"1.insert"<<endl<<"2.Remove"<<endl<<"3.Display"<<endl;
        cout<<"Enter choice: ";
        cin>>choice_exit_p;
        switch(choice_exit_p)
        {
            case 1: obj.insert();
            break;
            case 2: obj.removedata();
             break;
             case 3: obj.display();
            break;
            default:choice_exit_p=0;
             break;
        }
    }while(choice_exit_p);
    return 0;
}