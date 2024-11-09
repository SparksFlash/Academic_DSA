#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum = 0;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            for (int i = 1; i <= k; i = i + x)
            {
                sum++;
            }
        }
        cout << sum - n;
    }
}