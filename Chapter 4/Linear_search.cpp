#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key, index = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        cout << key << " found at position: " << index + 1 << endl;
    }
    else
    {
        cout << key << " not found." << endl;
    }
}