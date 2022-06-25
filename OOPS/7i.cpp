#include<iostream>
using namespace std;
class student{
private:
    string name;
    char gender;
    int rollno, marks, age;
public:
    void init(){
        fflush(stdin);
        cout<<"Enter Name: ";
        cin>>name;
        fflush(stdin);
        cout<<"Enter gender: ";
        cin>>gender;
        cout<<"Enter Roll No: ";
        cin>>rollno;
        cout<<"Enter Total Marks: ";
        cin>>marks;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void display(){
        cout<<name<<endl<<gender<<endl<<rollno<<endl<<marks<<endl<<age<<endl<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    student st[n], *ptr;
    ptr = &st[0];
    for(int i=0; i<n; i++){
        (ptr+i)->init();
        cout<<endl;
    }
    cout<<"-----------Displaying Data-----------"<<endl;
    for(int i=0; i<n; i++){
        (ptr+i)->display();
    }
    return 0;
}