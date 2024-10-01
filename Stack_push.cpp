#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(0);

    st.push(1);
    st.push(2);

    while (!st.empty())
    {
        cout << ' ' << st.top();
        st.pop();
    }
}