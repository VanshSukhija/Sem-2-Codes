#include <iostream>
using namespace std;

class time
{
private:
    int hrs;
    int min;
    int sec;

public:
    void getData()
    {
        cout << "Enter Time: ";
        cin >> hrs;
        cin >> min;
        cin >> sec;
    }

    time operator+(time t)
    {
        time temp;
        temp.hrs = hrs + t.hrs;
        temp.min = min + t.min;
        temp.sec = sec + t.sec;

        if (temp.sec >= 60)
        {
            temp.sec = temp.sec - 60;
            temp.min = temp.min + 1;
        }
        if (temp.min >= 60)
        {
            temp.min = temp.min - 60;
            temp.hrs = temp.hrs + 1;
        }

        return temp;
    }

    void display()
    {
        cout << "Time: " << hrs << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    time t1, t2;

    t1.getData();
    t1.display();

    t2.getData();
    t2.display();

    cout << "Total Time" << endl;

    (t1 + t2).display();

    return 0;
}