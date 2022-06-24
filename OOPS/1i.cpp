#include<iostream>
using namespace std;
struct phone{
    int areacode;
    int exchange;
    int number;
};
int main(){
    phone p1, p2;
    p1.areacode = 212, p1.exchange = 767, p1.number = 8900;
    cout<<"Enter area code: "; cin>>p2.areacode;
    cout<<"Enter exchange: "; cin>>p2.exchange;
    cout<<"Enter number: "; cin>>p2.number;
    cout<<endl<<"Phone 1: ("<<p1.areacode<<") "<<p1.exchange<<'-'<<p1.number;
    cout<<endl<<"Phone 2: ("<<p2.areacode<<") "<<p2.exchange<<'-'<<p2.number;
    return 0;
}