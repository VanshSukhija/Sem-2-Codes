#include<iostream>
using namespace std;
struct employee{
private:
    string name;
    int id;
    int salary;
    string address;
public:
    void getinput(){
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Salary: ";
        cin>>salary;
        fflush(stdin);
        cout<<"Enter address: ";
        getline(cin, address);
    }
    void printoutput(){
        cout<<endl<<name<<endl<<id<<endl<<salary<<endl<<address<<endl;
    }
};
int main(){
    employee emp;
    emp.getinput();
    emp.printoutput();
    return 0;
}