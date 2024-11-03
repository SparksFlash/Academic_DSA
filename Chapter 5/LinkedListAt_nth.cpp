#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void InsertAt_nth(int data, int n)
{
    Node *ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;

    if (n == 1)
    {
        ptr->next = head;
        head = ptr;
        return;
    }
    Node *ptr1 = head;
    for (int i = 0; i < n - 2; i++)
        ptr1 = ptr1->next;

    ptr->next = ptr1->next;
    ptr1->next = ptr;
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
    int n, data, pos;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data >> pos;
        InsertAt_nth(data, pos);
        Print();
    }
}