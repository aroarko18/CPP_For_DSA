#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    Student rahim(29, 10, 3.44);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}