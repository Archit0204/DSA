#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node* &tail, int element, int d)
{
    if (tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else
    {
        Node* temp = tail;

        while (temp->data != element)
        {
            temp = temp->next;
        }

        Node* newNode = new Node(d);

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void print(Node* tail)
{
    Node* temp = tail;

    if (tail == NULL)
    {
        cout << "The list is empty" << endl;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail ->next;
    }
    while(tail != temp);

    cout << endl;
}

void deleteNode(Node* &tail, int value)
{
    if (tail == NULL)
    {
        cout << "The list is already empty" << endl;
    }
    else
    {
        Node* prev = tail;
        Node* curr = tail->next;

        while(curr->data != value)
        {
            prev = curr;
            curr = curr ->next;
        }

        prev->next = curr->next;
        if (curr == prev)
        {
            tail = NULL;
        }
        if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node* tail = NULL;

    insertNode(tail, 4, 4);
    print(tail);

    insertNode(tail, 4, 8);
    print(tail);

    insertNode(tail, 8, 5);
    print(tail);

    insertNode(tail, 5, 9);
    print(tail);

    deleteNode(tail, 8);
    print(tail);

    return 0;
}