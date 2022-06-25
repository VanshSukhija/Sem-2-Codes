#include <iostream>
#include <cstdlib>
using namespace std;
class Queue{
private:
    int front;
    int rear;
    int data[100];
public:
    int size;
    Queue(){
        front = -1;
        rear = -1;
    }
    void insertqueue(){
        if(front == -1 && rear == -1){
            front++, rear++;
            cout<<"Enter data: ";
            cin>>data[rear];
        }
        else if(rear < size - 1){
            rear++;
            cout<<"Enter data: ";
            cin>>data[rear];
        }
        else if(rear > size - 2){
            cout<<"Queue Overflown"<<endl;
        }
    }
    void deletequeue(){
        if (front == -1 && rear == -1)
            cout<<"Queue is Empty"<<endl;
        else if (front < rear){
            cout<<"Deleted item is: "<<data[front]<<endl;
            front++;
        }
    }
    void display(){
        cout<<"Queue: ";
        for (int i=front; i<=rear; i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int n, m, ch;
    Queue s;
    cout << "Enter the size of Queue: ";
    cin >> s.size;
    while(1){
        cout<<"Enter 1 for insert"<<endl;
        cout<<"Enter 2 for delete"<<endl;
        cout<<"Enter 3 for display"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cout<<"Enter here: ";
        cin>>ch;
        cout<<endl;
        switch (ch){
            case 1:
                s.insertqueue();
                break;
            case 2:
                s.deletequeue();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(100);
        }
        cout<<endl;
    }
    return 0;
}