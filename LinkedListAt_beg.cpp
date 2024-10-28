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
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

void Print(Node *head)
{
    // Node *temp = head;
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
//     Node *temp = new Node();
//     temp->data = x;
//     temp->next = head;
//     head = temp;
// }

// void Print()
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << ' ';
//         temp = temp->next;
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