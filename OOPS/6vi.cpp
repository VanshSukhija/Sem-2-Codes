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

    frac operator[](frac f)
    {
        frac temp;

        temp.x = f.x - (int)f.x;

        cout << temp.x << endl;

        return temp;
    }
};

int main()
{
    frac f1, f;

    f1.getData();

    cout << endl;

    f1.display();

    cout << endl;

    cout << "Fractional part of frac: ";
    f = f[f1];

    return 0;
}
