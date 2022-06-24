#include <iostream>
using namespace std;
class fraction
{
private:
    int num;
    int den;

public:
    fraction(int a, int b)
    {
        num = a;
        den = b;
    }
    int geti()
    {
        return (num);
    }
    int getf()
    {
        return (den);
    }
    void seti(int a)
    {
        num = a;
    }
    void setf(int a)
    {
        den = a;
    }
    void operator-=(fraction f2)
    {
        num = num - f2.num;
    }
};
int lcm(int a, int b)
{
    if (a % b == 0)
        return (a);
    else
    {
        return (a * b);
    }
}
int main()
{
    int h, i;
    fraction f1(1, 5), f2(2, 7);
    if (f1.getf() != f2.getf())
    {
        h = f1.getf();
        i = f2.getf();
        if (f1.getf() > f2.getf())
        {
            f1.setf(lcm(f1.getf(), f2.getf()));
        }
        else
        {
            f1.setf(lcm(f2.getf(), f1.getf()));
        }
        f2.seti(f2.geti() * (f1.getf() / i));
        f1.seti(f1.geti() * (f1.getf() / h));
        f1 -= f2;
    }
    else
        f1 -= f2;
    if (f1.geti() == 0)
    {
        printf("diff= 0");
    }
    else
        printf("diff= %d/%d", f1.geti(), f1.getf());
}