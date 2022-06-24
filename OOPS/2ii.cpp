#include<iostream>
using namespace std;
class INT{
private:
    int variable;
public:
    INT(int var=0){
        variable = var;
    }
    void init(int var=0){
        variable = var;
    }
    void display(){
        cout<<variable<<endl;
    }
    INT add(INT a, INT b){
        variable = a.variable + b.variable;
    }

};
int main(){
    int num1, num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    INT a(num1), b, c(num2);
    b.add(a, c);
    b.display();
    return 0;
}