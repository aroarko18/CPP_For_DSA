#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

Student *fun()
{
    Student *rahim = new Student(342, 10, 3.33);
    return rahim;
}
int main()
{
    Student *ans = fun();
    cout << ans->cgpa << " " << ans->cls << " " << ans->roll << endl;
    return 0;
}