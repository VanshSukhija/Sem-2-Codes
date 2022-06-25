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

    int operator()()
    {
        x = (int)x;

        return x;
    }
};

int main()
{
    frac f;

    f.getData();

    cout << endl;

    f.display();

    cout << endl;

    cout << "Integral part of frac: " << f() << endl;

    return 0;
}
