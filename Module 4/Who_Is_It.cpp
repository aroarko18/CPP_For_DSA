#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;
};

int main()
{
    // Write your code here
    int n;
    cin >> n;
    while (n > 0)
    {
        Student a;
        cin >> a.id >> a.name >> a.section >> a.totalMarks;
        // Student b
        Student b;
        cin >> b.id >> b.name >> b.section >> b.totalMarks;

        // Student c
        Student c;
        cin >> c.id >> c.name >> c.section >> c.totalMarks;

        // cout << a.id << b.id << c.id;

        // marks checking a
        if (a.totalMarks > b.totalMarks && a.totalMarks > c.totalMarks)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.totalMarks << endl;
        }
        else if (b.totalMarks > a.totalMarks && b.totalMarks > c.totalMarks)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.totalMarks << endl;
        }
        else if (c.totalMarks > a.totalMarks && c.totalMarks > b.totalMarks)
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.totalMarks << endl;
        }
        else if (a.totalMarks == b.totalMarks == c.totalMarks)
        {
            if (a.id < b.id && a.id < c.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.totalMarks << endl;
            }
            else if (b.id < a.id && b.id < c.id)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.totalMarks << endl;
            }
            else if (c.id < a.id && c.id < b.id)
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.totalMarks << endl;
            }
        }
        else if (a.totalMarks == b.totalMarks)
        {
            if (a.id < b.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.totalMarks << endl;
            }
            else if (b.id < a.id)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.totalMarks << endl;
            }
        }
        else if (a.totalMarks == c.totalMarks)
        {
            if (a.id < c.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.totalMarks << endl;
            }
            else
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.totalMarks << endl;
            }
        }
        else if (b.totalMarks == c.totalMarks)
        {
            if (b.id < c.id)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.totalMarks << endl;
            }
            else
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.totalMarks << endl;
            }
        }
        n--;
    }

    return 0;
}
