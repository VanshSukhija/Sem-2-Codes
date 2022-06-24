#include <iostream>
using namespace std;
class compare2;
class compare1
{
private:
    int a;

public:
    compare1(int b = 0)
    {
        a = b;
    }
    friend void compare(compare1 c1, compare2 c2);
};
class compare2
{
private:
    int d;

public:
    compare2(int b = 0)
    {
        d = b;
    }
    friend void compare(compare1 c1, compare2 c2);
};
void compare(compare1 c1, compare2 c2)
{
    if (c1.a > c2.d)
        printf("elememt of class 1>class 2");
    else if (c2.d > c1.a)
        printf("elememt of class 1<class 2");
    else
        printf("elememt of class 1=class 2");
}
int main()
{
    compare1 c(2);
    compare2 c1(4);
    compare(c, c1);
}