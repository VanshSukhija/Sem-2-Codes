#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    long number;
public:
    void getdata(int i){
        fflush(stdin);
        cout<<"Enter name of Employee "<<i+1<<": ";
        getline(cin, name);
        cout<<"Enter Employee number: ";
        cin>>number;
    }
    void putdata(){
        cout<<name<<endl<<number<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    Employee emp[n];
    for(int i=0; i<n; i++){
        emp[i].getdata(i);
        fflush(stdin);
    }
    cout<<endl<<"Employee Data"<<endl;
    for(int i=0; i<n; i++){
        emp[i].putdata();
        cout<<endl;
    }
    return 0;
}