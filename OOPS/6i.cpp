#include <iostream>
using namespace std;

class loc
{
    int x;

public:
    void getData()
    {
        cout << "Enter Distance: ";
        cin >> x;
    }

    loc operator-(loc dis)
    {
        loc temp;
        temp.x = x - dis.x;
        return temp;
    }

    bool operator<(loc dis)
    {
        if (x < dis.x)
        {
            return true;
        }

        return false;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    loc dis1, dis2;

    dis1.getData();
    dis2.getData();

    if (dis1 < dis2)
    {
        cout << "Difference between the two distances is negative" << endl;

        return 0;
    }

    cout << "Difference between the two distances: ";

    (dis1 - dis2).display();
}