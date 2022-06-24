#include <iostream>
using namespace std;
class employee
{
private:
    string name;
    long int number;
    int salary;

public:
    void getdata(string a, long int b, int c)
    {
        name = a;
        number = b;
        salary = c;
    }
    string getn()
    {
        return (name);
    }
    long int getno()
    {
        return (number);
    }
    int gets()
    {
        return (salary);
    }
    void putdata()
    {
        cout << name << "\t" << number << "\t" << salary << "\n";
    }
};
void sorting(class employee e[], int n)
{
    class employee t;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (e[j].gets() > e[j + 1].gets())
            {
                t = e[j];
                e[j] = e[j + 1];
                e[j + 1] = t;
            }
        }
    }
}
int main()
{
    int n, x, c;
    string a;
    long int b;
    cout << "Enter the number of employee=";
    cin >> n;
    employee e[n];
    for (x = 0; x < n; x++)
    {
        cout << "enter the name,number ,salary of employee" << x + 1 << "=" << endl;
        cin >> a >> b >> c;
        e[x].getdata(a, b, c);
    }
    sorting(e, n);
    cout << "NAME\t NUMBER\t\tSALARY\n";
    for (x = 0; x < n; x++)
    {
        e[x].putdata();
    }
    printf("\nData of Highest Salary Emplyee=\n");
    cout << "NAME\t NUMBER\t\tSALARY\n";
    e[n - 1].putdata();
}