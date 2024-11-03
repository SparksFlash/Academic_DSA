#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link;
    Node(int data)
    {
        this->data = data;
        link = NULL;
    }
};

class LinkedList
{
private:
    Node *start;

public:
    LinkedList()
    {
        start = NULL;
    }

    void insert(int data)
    {
        Node *newNode = new Node(data);
        newNode->link = start;
        start = newNode;
    }

    void printAll()
    {
        if (start == NULL)
        {
            cout << "List is empty!\n";
            return;
        }
        Node *temp = start;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.printAll();
    return 0;
}
