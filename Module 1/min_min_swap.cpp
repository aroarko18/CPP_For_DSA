#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min({a, b, c});
    cout << mn;
    return 0;
}