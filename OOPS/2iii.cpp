#include<iostream>
using namespace std;
class bank{
private:
    string name;
    long long acc_no;
    string acc_type;
    long long amount;
public:
    void init(string n, long long num, string type, long long bal=0){
        name = n;
        acc_no = num;
        acc_type = type;
        amount = bal;
    }
    void deposit(int dep){
        amount += dep;
        cout<<dep<<" deposited"<<endl<<"Current balance: "<<amount<<endl;
    }
    void withdraw(int draw){
        if(draw>amount)
            cout<<"Unsufficient balance"<<endl;
        else{
            amount -= draw;
            cout<<draw<<" withdrawn"<<endl<<"Current balance: "<<amount<<endl;
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<amount<<endl;
    }
};
int main(){
    bank bk;
    string name;
    long long acc_no;
    string acc_type;
    long long amount;
    cout<<"Enter name: ";
    getline(cin, name);
    fflush(stdin);
    cout<<"Enter account number: ";
    cin>>acc_no;
    fflush(stdin);
    cout<<"Enter account type: ";
    getline(cin, acc_type);
    cout<<"Enter current balance: ";
    cin>>amount;
    bk.init(name, acc_no, acc_type, amount);
    cout<<endl;
    bk.deposit(100);
    cout<<endl;
    bk.withdraw(40);
    cout<<endl;
    bk.display();
    return 0;
}