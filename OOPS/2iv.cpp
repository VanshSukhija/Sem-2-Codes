#include<iostream>
#include<conio.h>
using namespace std;
class TollBooth{
private:
    unsigned int cars=0;
    double money=0;
public:
    void paycar(){
        cars++, money+=0.5;
    }
    void nopaycar(){
        cars++;
    }
    void display(){
        cout<<endl<<" Total Cars: "<<cars<<endl<<"Total Money: "<<money<<endl;
    }
};
int main(){
    TollBooth tb;
    char input;
    cout<<"Enter 'y' for PayCar\nEnter 'n' for NoPayCar\nEnter 'Esc' to exit\n";
    do{
        input = getche();
        if(input=='y')
            tb.paycar();
        else if(input=='n')
            tb.nopaycar();
    }while(input!=27);
    tb.display();
    return 0;
}