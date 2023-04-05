#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node() // works fine without this also
    {
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void InsertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *NodeToInsert = new Node(d);
        head = NodeToInsert;
        tail = NodeToInsert;
    }

    else
    {
        Node *NodeToInsert = new Node(d);
        NodeToInsert->next = head;
        head->prev = NodeToInsert;
        head = NodeToInsert;
    }
}

void InsertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *NodeToInsert = new Node(d);

        head = NodeToInsert;
        tail = NodeToInsert;
    }

    else
    {
        Node *NodeToInsert = new Node(d);

        tail->next = NodeToInsert;
        NodeToInsert->prev = tail;
        tail = NodeToInsert;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(head, tail, d);
        return;
    }

    Node *NodeToInsert = new Node(d);

    NodeToInsert->prev = temp;
    (temp->next)->prev = NodeToInsert;
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void DeleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        (temp->next)->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        Node *curr = head;
        Node *oneback = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            oneback = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr->next == NULL)
        {
            tail = oneback;
            curr->prev = NULL;
            oneback->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
        else
        {
            curr->prev = NULL;
            oneback->next = curr->next;
            (curr->next)->prev = oneback;
            curr->next = NULL;
            delete curr;
        }
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(Node* &head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        curr->prev = forward;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, tail, 8);
    print(head);

    InsertAtTail(head, tail, 10);
    print(head);

    InsertAtPosition(head, tail, 2, 9);
    print(head);

    InsertAtPosition(head, tail, 4, 1);
    print(head);

    InsertAtPosition(head, tail, 5, 3);
    print(head);

    reverse(head);
    print(head);

    return 0;
}