#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    char ch[100001];
    // cin >> ch;
    while (cin.getline(ch, 100001))
    {
        int lenght = strlen(ch);
        int nonSpace = 0;
        for (int i = 0; i < lenght; i++)
        {
            if (ch[i] != ' ')
            {
                ch[nonSpace++] = ch[i];
            }
        }
        ch[nonSpace] = '\0';
        sort(ch, ch + strlen(ch));

        cout << ch << endl;
    }
    return 0;
}
