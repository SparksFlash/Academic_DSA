#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void InsertAtEnd(int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL)
    {
        head = ptr;
        return;
    }
    Node *last = head;
    while (last->next != NULL) // Traverse to the last node
        last = last->next;
    last->next = ptr; // Attach the new node at the end
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
    int n, data;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        InsertAtEnd(data);
        Print();
    }
}