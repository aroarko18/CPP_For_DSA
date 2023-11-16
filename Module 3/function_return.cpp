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

Student fun()
{
    Student rahim(2, 20, 3.33);
    return rahim;
}
int main()
{
    Student ans = fun();
    cout << ans.roll << " " << ans.cls << " " << ans.cgpa << endl;
    return 0;
}