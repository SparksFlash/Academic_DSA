#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// struct Node *head; //head as a global variable

Node *Insert(Node *head, int x)
{
    Node *ptr = new Node();
    ptr->data = x;
    ptr->next = head;
    return ptr;
}

void Print(Node *head)
{
    // Node *ptr = head;
    while (head != NULL)
    {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}

int main()
{
    Node *head = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        head = Insert(head, x);
        Print(head);
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
// };

// struct Node *head;

// void Insert(int x)
// {
//     Node *ptr = new Node();
//     ptr->data = x;
//     ptr->next = head;
//     head = ptr;
// }

// void Print()
// {
//     Node *ptr = head;
//     while (ptr != NULL)
//     {
//         cout << ptr->data << ' ';
//         ptr = ptr->next;
//     }
//     cout << '\n';
// }

// int main()
// {
//     head = NULL;
//     int n, x;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         Insert(x);
//         Print();
//     }
// }