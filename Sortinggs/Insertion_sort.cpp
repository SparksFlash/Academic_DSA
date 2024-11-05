#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int ii = 1; ii < n; ii++)
    {
        int current = a[ii];
        int jj = ii - 1;
        while (a[jj] > current and jj >= 0)
        {
            a[jj + 1] = a[jj];
            jj--;
        }
        a[jj + 1] = current;
    }

    for (auto kk : a)
        cout << kk << ' ';
}