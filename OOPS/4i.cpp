#include <iostream>
using namespace std;
class time
{
private:
    int hour;
    int second;
    int minute;
    int *d;

public:
    time()
    {
        hour = 0;
        second = 0;
        minute = 0;
    }
    time(int a, int b, int c)
    {
        hour = a;
        second = c;
        minute = b;
    }
    void seth(int h)
    {
        hour = h;
    }
    void setm(int h)
    {
        minute = h;
    }
    void sets(int h)
    {
        second = h;
    }
    int geth()
    {
        return (hour);
    }
    int getm()
    {
        return (minute);
    }
    int gets()
    {
        return (second);
    }
    friend time addtime(time t1, time t2);
};
time addtime(time t1, time t2)
{
    time temp;
    temp.hour = t1.hour + t2.hour;
    temp.second = t1.second + t2.second;
    temp.minute = t1.minute + t2.minute;
    return (temp);
}
int main()
{
    int h;
    time t1;
    time t2(2, 53, 40);
    time t3(3, 20, 30);
    t1 = addtime(t2, t3);
    t1 = new;
    if ((t1.gets()) > 60)
    {
        h = (t1.gets()) / 60;
        t1.sets(t1.gets() % 60);
        t1.setm(t1.getm() + h);
    }
    if (t1.getm() > 60)
    {
        h = t1.getm() / 60;
        t1.setm((t1.getm()) % 60);
        t1.seth((t1.geth()) + h);
    }
    printf("%d hour %d minute %d second", t1.geth(), t1.getm(), t1.gets());
}