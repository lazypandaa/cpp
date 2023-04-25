#include<iostream>
using namespace std;
template<class s>
class stack
{
   public:s num[5];
    int top;
    stack()
    {
        top=-1;

    }
    s push(s d)
    {
        if(top>5)
        {
            cout<<"stack is full";
        }
         else{
                top++;
             num[top]=d;

            }
    }
    s pop()
    {
        if(top==-1)
        {
        cout<<"stack no is empty";
        // return 0;
        }
        else
        {
        s d=num[top];
        top--;
        return d;
        }
    }  
};
int main()
{
stack<int>s1;
for(int j=10;j<=60;j=j+10)
    s1.push(j);

for(int j=0;j<=5;j++)
    cout<<s1.pop();

stack<float>s2;
for(int j=1;j<=6;j++)
    {
        s2.push(.1+j);
        for(j=0;j<+5;j++)
        cout<<endl<<s2.pop();
    }
return 0;
}
