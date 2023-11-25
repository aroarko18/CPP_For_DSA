#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool cmp(Student a, Student b)
{
    if (a.total_marks > b.total_marks)
    {
        return true;
    }
    else if (a.total_marks < b.total_marks)
    {
        return false;
    }
    else
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    // Write your code here
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}
