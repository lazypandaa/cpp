#include<iostream>
using namespace std;

class bankk{
    private: char name[32];
            int acno,bal;
    public: void getdata(int i)
            {
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter balance: ";
                cin>>bal;
                acno=i;
            }
            void credit(int x)
            {
                bal += x;
            }
             void debit(int x)
            {
                bal -= x;
            }
            void display()
            {
                cout<<name<<"\t\t"<<acno<<"\t\t"<<bal<<endl;
            }
            void getnamee(){
                    cout<<"You selected "<<name<<endl;   
            }

};

int main()
{
    int i,x,ch;
    char n[32];
    bankk a[2],b;
    for(int i=1;i<=2;i++)
    {
        a[i].getdata(i);}
    cout<<"\nNAME  ||  ACNO  ||  BALANCE\n";
    for(int i=1;i<=2;i++)
    {
        a[i].display(); } 
    
    cout<<"\nEnter acno: ";
    cin>>i;
    a[i].getnamee();
    cout<<"Select 1 for credit\nSelect 2 for debit\n\nyou choose: ";
    cin>>ch;
    cout<<"Credit amount: ";
    cin>>x;
    if(ch=1){
        a[i].credit(x);
        a[i].display(); 
    }
    else if(ch=2){
        a[i].debit(x);
        a[i].display(); 
    }
    else{
        cout<<"Incorrect choice";
    }
    return 0;
}
