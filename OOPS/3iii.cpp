#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    void getDist(){
        cin>>feet>>inches;
    }
    void showDist(){
        cout<<feet<<"' "<<inches<<endl;
    }
    float distadd(){
        return feet*12 + inches;
    }
};
int main(){
    int n;
    float avg=0;
    cout<<"Enter number of distances: ";
    cin>>n;
    Distance dt[n];
    for(int i=0; i<n; i++){
        dt[i].getDist();
        avg += dt[i].distadd()/n;
    }
    cout<<"Average: "<<(int)avg/12<<"'"<<avg - (int)avg/12*12;
    return 0;
}
