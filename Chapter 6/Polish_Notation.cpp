#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            continue;
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' and s[i] <= 'Z'))
            result += s[i];
        else if (s[i] == '(')
            st.push(s[i]);

        else if (s[i] == ')')
        {
            while (!st.empty() and st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    return result;
}

string infixToPrefix(string s)
{
    reverse(s.begin(), s.end());
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            continue;
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' and s[i] <= 'Z'))
            result += s[i];
        else if (s[i] == ')')
            st.push(s[i]);

        else if (s[i] == '(')
        {
            while (!st.empty() and st.top() != ')')
            {
                result += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    cout << infixToPostfix("(a - b / c) * (p / q - r)") << '\n';
    cout << infixToPrefix("(a - b / c) * (p / q - r)") << '\n';
}
