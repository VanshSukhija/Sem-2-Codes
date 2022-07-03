#include <bits/stdc++.h>
using namespace std;
bool check(stack<int> &a, stack<int> &b)
{
    if (a.empty())
    {
        a.push(b.top());
        b.pop();
        return false;
    }
    else if (b.empty())
    {
        b.push(a.top());
        a.pop();
        return true;
    }
    else if (b.top() > a.top())
    {
        b.push(a.top());
        a.pop();
        return true;
    }
    else
    {
        a.push(b.top());
        b.pop();
        return false;
    }
}
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    stack<int> a, b, c;
    for (int i = n; i >= 1; i--)
    {
        a.push(i);
    }
    int i = 0;
    if (n % 2 == 0)
    {
        while (i < pow(2, n))
        {
            if (i % 3 == 0)
            {
                if (check(a, c))
                {
                    cout << "move from a to c" << endl;
                }
                else
                {
                    cout << "move from c to a" << endl;
                }
            }
            else if (i % 3 == 1)
            {
                if (check(a, b))
                {
                    cout << "move from a to b" << endl;
                }
                else
                {
                    cout << "move from b to a" << endl;
                }
            }
            else
            {
                if (check(b, c))
                {
                    cout << "move from b to c" << endl;
                }
                else
                {
                    cout << "move from c to b" << endl;
                }
            }
            i++;
        }
    }
    else
    {
        while (i < pow(2, n))
        {
            if (i % 3 == 0)
            {
                if (check(a, b))
                {
                    cout << "move from a to b" << endl;
                }
                else
                {
                    cout << "move from b to a" << endl;
                }
            }
            else if (i % 3 == 1)
            {
                if (check(a, c))
                {
                    cout << "move from a to c" << endl;
                }
                else
                {
                    cout << "move from c to a" << endl;
                }
            }
            else
            {
                if (check(b, c))
                {
                    cout << "move from b to c" << endl;
                }
                else
                {
                    cout << "move from c to b" << endl;
                }
            }
            i++;
        }
    }
}