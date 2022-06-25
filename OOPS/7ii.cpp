#include <iostream>
#include <string.h>
using namespace std;
class String{
private:
    char *name;
    int length;
public:
    String(){
        length = 0;
        name = new char[length + 1];
    }
    String(char *s){
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    void upit(){
        for (int i=0; i<length; i++){
            name[i] = name[i] + 'A' - 'a';
        }
    }
    void display(){
        cout << "Name: " << name << endl;
    }
};
int main(){
    char name[20];
    cout<<"Enter Name: ";
    cin>>name;
    String s(name);
    s.display();
    s.upit();
    s.display();
    return 0;
}
