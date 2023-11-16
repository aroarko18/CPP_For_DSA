#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[1000];
    int roll;
    double cgpa;
};

int main()
{
    Student a;
    // char temp[100] = "Arko";
    // strcpy(a.name, temp);
    // a.roll = 001;
    // a.cgpa = 3.81;
    // cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    cin.getline(a.name, 100);
    getchar();
    cin >> a.roll >> a.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    return 0;
}