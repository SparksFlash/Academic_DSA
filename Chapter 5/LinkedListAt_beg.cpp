#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

void Insert(int x)
{
    Node *ptr = new Node();
    ptr->data = x;
    ptr->next = head;
    head = ptr;
}

void Print()
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << '\n';
}

int main()
{
    head = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Insert(x);
        Print();
    }
}