#include<iostream>
using namespace std;
class stack{
private:
    int size, top, *ptr;
public:
    stack(int s){
        size = s;
        this->ptr = (int *)malloc(size*sizeof(int));
        top = -1;
    }
    void push(int num){
        if(top == size-1)
            cout<<"Stack Overflow"<<endl;
        else{
            top++;
            ptr[top] = num;
        }
    }
    int pop(){
        int num;
        if(top==-1)
            cout<<"Stack Underflown"<<endl;
        else{
            num = ptr[top];
            top--;
        }
        return num;
    }
    int stackfull(){
        if(top == size-1)
            return 1;
        else
            return 0;
    }
    int stackempty(){
        if(top == -1)
            return 1;
        else
            return 0;
    }
    void display(){
        cout<<"Stack: ";
        for(int i=0; i<=top; i++){
            cout<<ptr[i]<<' ';
        }
        cout<<endl;
    }
};
int main(){
    stack st(5);
    st.push(1);
    st.display();
    st.push(2);
    st.display();
    st.push(3);
    st.display();
    st.push(4);
    st.display();
    st.pop();
    st.display();
    st.pop();
    st.display();
    st.pop();
    st.display();
    return 0;
}