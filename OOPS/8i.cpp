#include <iostream>
using namespace std;

class student
{
protected:
    int roll;
    string name;

public:
    student() {}

    void getData1()
    {
        cout<<"Enter Roll No: ";
        cin >> roll;
        cout<<"Enter Name: ";
        cin >> name;
    }

    void display1()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

class exam : public student
{
protected:
    float phy;
    float chem;
    float math;
    float ss;
    float eng;
    float hindi;

public:
    exam() {}

    void getData2()
    {
        cout << "Enter phy marks: ";
        cin >> phy;
        cout << "Enter chem marks: ";
        cin >> chem;
        cout << "Enter math marks: ";
        cin >> math;
        cout << "Enter ss marks: ";
        cin >> ss;
        cout << "Enter eng marks: ";
        cin >> eng;
        cout << "Enter hindi marks: ";
        cin >> hindi;
    }
};

class result : public exam
{
    float totalMarks;

public:
    int total()
    {
        totalMarks = phy + chem + math + ss + eng + hindi;

        return totalMarks;
    }

    void display2()
    {
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    int n;
    cout << "Enter no of students: ";
    cin >> n;

    result st[n];

    cout << "Enter student details " << endl;
    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        st[i].getData1();
        st[i].getData2();

        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        st[i].total();
    }

    cout << endl;
    cout << "Exam Result " << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        st[i].display1();
        st[i].display2();

        cout<<endl;
    }

    return 0;
}