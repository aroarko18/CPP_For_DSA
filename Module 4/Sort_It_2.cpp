#include <bits/stdc++.h>

using namespace std;

int *sort_it(int n)
{
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());
    // sort(arr, arr + n);
    return arr;
}

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int *result = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
