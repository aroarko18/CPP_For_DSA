#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string result = "Jessica";
    int flag = 0;
    while (ss >> word)
    {
        if (word != result)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
