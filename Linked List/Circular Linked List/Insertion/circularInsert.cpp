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

void insertNode(Node* &tail, int value, int data)
{
    if (tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* temp = tail;

        while(temp->data != value)
        {
            temp = temp->next;
        }

        Node* newNode = new Node(data);
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

    do{
        cout << tail->data << " ";
        tail = tail->next;
    } 
    while(tail != temp);

    cout << endl;

}

int main()
{
    Node* tail = NULL;

    insertNode(tail, 4, 4);
    print(tail);

    insertNode(tail, 4, 8);
    print(tail);

    return 0;
}