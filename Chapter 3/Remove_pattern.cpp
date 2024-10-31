#include <bits/stdc++.h>
using namespace std;

void removeSubstrings(string &s, const string &p)
{
    size_t pos = s.find(p);
    while (pos != -1)
    {
        s.erase(pos, p.length());
        pos = s.find(p);
    }
}

int main()
{
    string T = "XABYABZ";
    string P = "BZ";

    removeSubstrings(T, P);
    cout << T << '\n';
}
