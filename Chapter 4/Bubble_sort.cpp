#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int counter = 1;
    while (counter <= n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        counter++;
    }

    for (auto i : a)
        cout << i << ' ';
}