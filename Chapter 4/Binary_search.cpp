#include <bits/stdc++.h>
using namespace std;

int Binary_search(int DATA[], int N, int ITEM)
{
    int UB = N - 1, LB = 0;
    int BEG = LB, END = UB;
    while (BEG <= END)
    {
        int MID = (BEG + END) / 2;
        if (DATA[MID] == ITEM)
        {
            return MID;
        }
        else if (DATA[MID] < ITEM)
            BEG = MID + 1;
        else
            END = MID - 1;
    }
    return -1;
}

int main()
{
    int n, KEY;
    cin >> n;
    int a[n];

    for (int ii = 0; ii < n; ii++)
        cin >> a[ii];

    cout << "Enter the item to search: ";
    cin >> KEY;

    int index = Binary_search(a, n, KEY);

    if (index != -1)
        cout << "ITEM found at position: " << (index + 1) << '\n';
    else
        cout << "Item not found." << '\n';
}
