#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float img;

public:
    float getr()
    {
        return (real);
    }
    float geti()
    {
        return (img);
    }
    complex(float a = 0, float b = 0)
    {
        real = a;
        img = b;
    }
    complex operator+(complex f3)
    {
        complex temp;
        temp.real = real + f3.real;
        temp.img = img + f3.img;
        return (temp);
    }
    complex operator-(complex f3)
    {
        complex temp;
        temp.real = real - f3.real;
        temp.img = img - f3.img;
        return (temp);
    }
    complex operator*(complex f3)
    {
        complex temp;
        temp.real = real * f3.real;
        temp.img = img * f3.img;
        return (temp);
    }
    complex operator/(complex f3)
    {
        complex temp;
        temp.real = real / f3.real;
        temp.img = img / f3.img;
        return (temp);
    }
};
int main()
{
    complex f1;
    complex f2(2, 3), f3(5, 4);
    f1 = f2 + f3;
    printf("numbers are=\n");
    printf("%.0f + %0.0fi\n", f2.getr(), f2.geti());
    printf("%.0f + %0.0fi\n", f3.getr(), f3.geti());
    printf("addition = %0.f + %0.fi\n", f1.getr(), f1.geti());
    f1 = f2 - f3;
    if (f1.geti() < 0)
        printf("subtraction = %0.f - %0.fi\n", f1.getr(), -f1.geti());
    else
        printf("subtraction = %0.f + %0.fi\n", f1.getr(), f1.geti());
    f1 = f2 * f3;
    printf("multiplication = %.0f + %0.fi\n", f1.getr(), f1.geti());
    f1 = f2 / f3;
    printf("division =%.2f + %0.2fi\n", f1.getr(), f1.geti());
}