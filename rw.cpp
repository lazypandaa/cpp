#include<iostream>
#include<fstream>
using namespace std;

class student
{
    int id;
    char name[20];
    public:void getstu()
    {
        cout<< "Enter student\n";
        cin>>id>>name;
    }
};
int main()
{
    student obj;
    ofstream file("student.txt");
    char op;
    do{

        obj getstr();
        file.write((char *)&obj,sizeof(obj));
        cout<<"One row created";
        cout<<"wanna continue (Y/N)";
        
    }
}