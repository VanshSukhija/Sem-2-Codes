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
    void operator*=(fraction f2)
    {
        num = num * f2.den;
        den = den * f2.num;
    }
};
int main()
{
    int h, i;
    fraction f1(1, 5), f2(2, 7);
    f1 *= f2;
    printf("division= %d/%d", f1.geti(), f1.getf());
}