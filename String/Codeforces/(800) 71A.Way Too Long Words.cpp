// Ques Link: https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    while (n--)
    {
        string w;
        cin >> w;

        int len = static_cast<int>(w.length());

        if (len > 10)
            cout << w[0] << len - 2 << w[len - 1] << '\n';
        else
            cout << w << '\n';
    }
}

int main()
{
    solve();
    return 0;
}