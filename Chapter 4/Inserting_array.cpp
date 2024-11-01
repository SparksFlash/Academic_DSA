#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec{ 1, 2, 3, 4, 5 };
    vec.insert(vec.begin() + 3, 100);
    for (auto i : vec)
        cout << i << " ";
}