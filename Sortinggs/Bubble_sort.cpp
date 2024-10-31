#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    for (int ii = 0; ii < n; ii++)
        cin >> a[ii];

    int counter = 1;
    while (counter < n - 1)
    {
        for (int jj = 0; jj < n - counter; jj++)
        {
            if (a[jj] > a[jj + 1])
            {
                int temp = a[jj];
                a[jj] = a[jj + 1];
                a[jj + 1] = temp;
            }
        }
        counter++;
    }

    for (auto ii : a)
    {
        cout << ii << ' ';
    }
}