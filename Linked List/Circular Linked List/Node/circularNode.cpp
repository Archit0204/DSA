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
        Node* temp = new Node(d);
        temp->next = temp;
        tail = temp;
    }
    else
    {
        Node* curr = tail;

        while(curr->data != element)
        {
            curr = curr->next;
        }
        Node* NodeToInsert = new Node(d);
        NodeToInsert->next = curr->next;
        curr->next = NodeToInsert;
    }
}

void print(Node* tail)
{
    Node* temp = tail;

    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail != temp);

    cout << endl;
}

void DeleteNode(Node* &tail, int value)
{

    if (tail == NULL)
    {
        cout << "List is already empty" << endl; 
    }

    else
    {
        Node* prev = tail;
        Node* curr = tail->next;

        while(value != curr->data)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if(curr == prev)
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

    insertNode(tail, 4, 2);
    print(tail);

    insertNode(tail, 2, 1);
    print(tail);

    insertNode(tail, 2, 7);
    print(tail);

    insertNode(tail, 1, 3);
    print(tail);

    insertNode(tail, 7, 5);
    print(tail);

    return 0;
}