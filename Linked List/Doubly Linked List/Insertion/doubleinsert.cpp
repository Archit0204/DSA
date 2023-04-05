#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d)
    {
        this-> data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertAtHead(Node* &head, Node* &tail, int d)
{
    if (head == NULL)
    {
        Node *NodeToInsert = new Node(d);
        head = NodeToInsert;
        tail = NodeToInsert;
    }

    else
    {
        Node* NodeToInsert = new Node(d);

        NodeToInsert->next = head;
        head->prev = NodeToInsert;
        head = NodeToInsert;
    }
}

void InsertAtTail(Node* &head, Node* &tail, int d)
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

        NodeToInsert->prev = tail;
        tail->next = NodeToInsert;
        tail = NodeToInsert;
    }
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, tail, d);
        return;
    }

    int cnt = 1;
    Node* temp = head;

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

    NodeToInsert->next = temp->next;
    (temp->next)->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;
}

void print(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(head, tail, 1);
    print(head);

    InsertAtTail(head, tail, 9);
    print(head);

    InsertAtPosition(head, tail, 2, 5);
    print(head);

    return 0;
}