#include <iostream>
using namespace std;

class publication
{
    string title;
    float price;

public:
    publication() {}

    void getData1()
    {
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    void putData1()
    {
        cout << "Title of Book: " << title << endl;
        cout << "Price of Book: " << price << endl;
    }
};

class sales
{
    float s[3];

public:
    void getData4()
    {
        cout << "Enter sales: " << endl;
        cin >> s[0];
        cin >> s[1];
        cin >> s[2];
    }

    void putData4()
    {
        cout << "Sales of last 3 months: " << s[0] << " " << s[1] << " " << s[2] << endl;
    }
};

class book : public publication, public sales
{
    int page;

public:
    book() {}

    void getData2()
    {
        cout << "Enter Page count: ";
        cin >> page;
    }

    void putData2()
    {
        cout << "Page count: " << page << endl;
    }
};

class tape : public publication, public sales
{
    float playingtime;

public:
    tape() {}

    void getData3()
    {
        cout << "Enter playing time(in min): ";
        cin >> playingtime;
    }

    void putData3()
    {
        cout << "Playing Time: " << playingtime << endl;
    }
};

int main()
{
    int n;
    cout << "Enter no of books: ";
    cin >> n;

    int m;
    cout << "Enter no of tapes: ";
    cin >> m;

    book b[n];
    tape t[m];

    cout << "Input Data: " << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Book Details" << endl;
        b[i].getData1();
        b[i].getData2();
        b[i].getData4();
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        cout << "Enter Tape Details" << endl;
        t[i].getData1();
        t[i].getData3();
        t[i].getData4();
        cout << endl;
    }

    cout << "Displaying Data: " << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        b[i].putData1();
        b[i].putData2();
        b[i].putData4();
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        t[i].putData1();
        t[i].putData3();
        t[i].putData4();
        cout << endl;
    }

    return 0;
}