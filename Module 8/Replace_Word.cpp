#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int T;
    cin >> T;

    while (T > 0)
    {
        string S, X;
        cin >> S >> X;
        size_t word = S.find(X);

        int not_exist = -1;
        while (word != not_exist)
        {
            S.replace(word, X.length(), "#");
            word = S.find(X, word + 1);
        }

        cout << S << endl;
        T--;
    }

    return 0;
}