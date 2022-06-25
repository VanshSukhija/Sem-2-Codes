#include <iostream>
using namespace std;
class Array{
private:
    int l,i;
    int *arr;
    void extend(){
        int *arr2;
        if(i == 0){
            arr = new int;
            i++;
        }
        else{
            arr2 = new int[++i];
            for (int j = 0; j <= i - 2; j++){
                arr2[j] = arr[j];
            }
            delete (arr);
            arr = arr2;
        }
    }
    void contract(){
        int *arr2;
        arr2 = new int[--i];
        for (int j = 0; j < i; j++){
            arr2[j] = arr[j];
        }
        delete (arr);
        arr = arr2;
    }
public:
    Array(int x){
        arr = NULL;
        l = x;
        i = 0;
    }
    Array(Array &a){
        l = a.l;
        arr = a.arr;
    }
    ~Array(){
        delete (arr);
    }
    int append(int x){
        if(i != l){
            extend();
            arr[i - 1] = x;
            return 1;
        }
        else
            return 0;
    }
    int chop(){
        if(i != 0){
            contract();
            return 1;
        }
        else{
            return 0;
        }
    }
    void show(){
        for(int j = 0; j < i; j++){
            cout << arr[j] << ' ';
        }
    }
};
int main(){
    int i, a, j;
    Array x(5);
    while(j){
        cout<<"Select from the following"<<endl;
        cout<<"1. Append"<<endl;
        cout<<"2. Chop"<<endl;
        cin>>i;
        if(i == 1){
            cout<<"Enter the value: ";
            cin>>a;
            x.append(a);
        }
        if(i == 2)
            x.chop();
        cout<<"Want more operation?(0/1): ";
        cin>>j;
    }
    cout<<"Array: ";
    x.show();
    return 0;
}