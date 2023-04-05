#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head, int d)
{
    Node* NodeToInsert = new Node(d);

    NodeToInsert->next = head;
    head = NodeToInsert;   
}

void InsertAtTail(Node* &tail, int d)
{
    Node* NodeToInsert = new Node(d);

    tail->next = NodeToInsert;
    tail = NodeToInsert;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    Node* NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void DeleteNode(Node *&head, Node* &tail, int position)
{
    Node* temp = head;

    if (position == 1)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = temp;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr->next == NULL)
        {
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}

int main()
{
    Node* first = new Node(10);

    Node* head = first;
    Node* tail = first;

    cout << "Head " << head->data << " Tail " << tail->data << endl;

    cout << "First" << endl;
    InsertAtHead(head, 12);
    print(head);

    cout << "Second" << endl;
    InsertAtTail(tail, 15);
    print(head);

    cout << "Third" << endl;
    InsertAtPosition(head, tail, 3, 20);
    print(head);

    cout << "Head " << head->data << " Tail " << tail->data << endl << endl;

    cout << "Fourth" << endl;
    DeleteNode(head, tail, 4);
    print(head);
    cout << "Head " << head->data << " Tail " << tail->data << endl << endl;

    return 0;
}