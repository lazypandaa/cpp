#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char arr[100];
    cout<<"Enter name: ";
    cin.getline(arr,100);
    ofstream myfile("xyz.txt");
    myfile <<arr;
    myfile.close();
    cout<<"file write operation is sucessful\n";
    cout<<"Reading from file\n";
    ifstream obj("xyz.txt");
    obj.getline(arr,100);
    cout<<"array content is :"<<arr<<endl;
    cout<<"file is read sussfully";
    obj.close();
    return 0;
}