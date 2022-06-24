#include<iostream>
using namespace std;
typedef class student{
private:
    int roll_no;
    string name;
    string address;
    string city;
    int pin;
    int sem;
    int rank;
    string branch;
public:
    void set(int i){
        cout<<"Enter Roll no. of student "<<i+1<<": ";
        cin>>roll_no;
        fflush(stdin);
        cout<<"Enter name: ";
        getline(cin, name);
        fflush(stdin);
        cout<<"Enter Address: ";
        getline(cin, address);
        fflush(stdin);
        cout<<"Enter city: ";
        getline(cin, city);
        fflush(stdin);
        cout<<"Enter pin: ";
        cin>>pin;
        fflush(stdin);
        cout<<"Enter sem: ";
        cin>>sem;
        fflush(stdin);
        cout<<"Enter rank: ";
        cin>>rank;
        fflush(stdin);
        cout<<"Enter branch: ";
        getline(cin, branch);
        fflush(stdin);
    }
    void get(){
        cout<<endl<<name<<endl<<roll_no<<endl<<address<<endl<<city<<endl<<pin<<endl<<sem<<endl<<rank<<endl<<branch<<endl;
    }
    string getbranch(){
        return branch;
    }
    int getsem(){
        return sem;
    }
}stud;

int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    stud st[n]; 
    for(int i=0; i<n; i++){
        st[i].set(i);
        fflush(stdin);
    }
    string branch;
    int sem;
    cout<<"Enter branch to display data: ";
    cin>>branch;
    cout<<"Enter semester to display data: ";
    cin>>sem;
    for(int i=0; i<n; i++){
        if(st[i].getbranch()==branch && st[i].getsem()==sem)
            st[i].get();
    }   
    return 0;
}