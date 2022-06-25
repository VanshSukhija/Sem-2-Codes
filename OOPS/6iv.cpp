#include <iostream>
using namespace std;

class frac
{
    float x;

public:
    frac() {}

    void getData()
    {
        cout << "Enter value: ";
        cin >> x;
    }

    void display()
    {
        cout << "Entered value: ";
        cout << x << endl;
    }

    friend bool operator&&(frac f1, frac f2);
};

bool operator&&(frac f1, frac f2)
{
    return f1.x && f2.x;
}

int main()
{
    frac f1, f2;

    f1.getData();
    f2.getData();

    cout << endl;

    f1.display();
    f2.display();

    cout<<endl;

    if ((f1 && f2) == 0)
    {
        cout << "One of the fraction is zero"<<endl;

        return 0;
    }

    cout << "Neither of the fraction is zero"<<endl;

    return 0;
}
