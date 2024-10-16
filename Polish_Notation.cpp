#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

string infixToPostfix(string infix)
{
    infix = '(' + infix + ')';
}

int getPriority(char c)
{
    if (c == '-' || c == '+')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
    return 0;
}

int main()
{
}