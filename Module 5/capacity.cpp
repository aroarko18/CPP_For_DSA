#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // string a;
    // cout << a.capacity() << endl;
    // a = "abcdefghijklmnopqrstuvwxyzabcdefghijkl";
    // cout << a.capacity() << endl;

    // string s = "Hello";
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;
    // cout << s.size() << endl;

    // string s = "Hello";
    // s.clear();
    // if (s.empty() == true)
    //     cout << "Empty" << endl;
    // else
    //     cout << "Not Empty" << endl;

    string s;
    cin >> s;
    // cout << s << endl;
    s.resize(5);
    cout << s << endl;
    s.resize(11, 'X');
    cout << s << endl;
    return 0;
}