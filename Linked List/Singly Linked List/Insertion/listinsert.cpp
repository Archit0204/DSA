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

void insertattail(Node* &tail, int d)
{
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertathead(Node* &head, int d)
{
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertatposition(Node* &tail, Node* &head, int position, int d)
{
    // insert atr start
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1) // here "< position - 1" is used because for cnt = 1 and position = 3, it will point to the 2nd node
    {
        temp = temp->next;
        cnt++;
    }

    // insert at end
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    Node* NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void print(Node* &head)
{
    // creating a new node
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }    
    cout << endl;
}

int main()
{
    // creating a new node
    Node* node1 = new Node(10);

    Node* head = node1; // reperesents the first node 
    Node* tail = node1; // represents the last node
    print(head);

    insertathead(head, 12);
    print(head);

    insertatposition(tail, head, 3, 15);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}