#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min({a, b, c});
    cout << mn << endl;

    int mx = max({a, b, c});
    cout << mx << endl;

    return 0;
}