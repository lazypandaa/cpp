#include<iostream>
using namespace std;

class swa{
    private: int x,y,temp;
    public: void getdata()
            {
                cout<<"Enter x,y: ";
                cin>>x>>y;
            }
            void display()
            {
                cout<<"x,y: "<<x<<"  "<<y<<endl;
            }
            void swapp(swa &obj1, swa &obj2)
            {
                temp=obj1.x;
                obj1.x=obj2.x;
                obj2.x=temp;

                temp=obj1.y;
                obj1.y=obj2.y;
                obj2.y=temp;
            }

};

int main()
{
    swa a,b,c;
    a.getdata();
    b.getdata();
    c.swapp(a,b);
    cout<<"OB1 ";
    a.display();
    cout<<"OB2 ";
    b.display();   
    return 0;
}
