#include<iostream>
using namespace std;
struct point{
    int x, y;
};
int main(){
    point p1, p2, p3;
    p1.x = 1, p1.y = 2;
    p2.x = 3, p2.y = 4;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout<<"Point 1: ("<<p1.x<<", "<<p1.y<<")"<<endl;
    cout<<"Point 2: ("<<p2.x<<", "<<p2.y<<")"<<endl;
    cout<<"Point 3: ("<<p3.x<<", "<<p3.y<<")"<<endl;
    return 0;
}