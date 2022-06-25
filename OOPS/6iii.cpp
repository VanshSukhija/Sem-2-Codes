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

    friend bool operator>(frac f1, frac f2);
};

bool operator>(frac f1, frac f2)
{
    if (f1.x > f2.x)
    {
        return true;
    }
    return false;
}

int main()
{
    frac f1, f2;

    f1.getData();
    f2.getData();

    cout << endl;
    
    f1.display();
    f2.display();

    if (f1 > f2)
    {
        cout << "Fraction 1 is greater than Fraction 2";

        return 0;
    }
    cout << "Fraction 2 is greater than Fraction 1";

    return 0;
}
