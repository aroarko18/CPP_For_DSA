#include <bits/stdc++.h>
using namespace std;

int *fun(int n)
{

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    int n;
    cin >> n;
    int *p = fun(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}