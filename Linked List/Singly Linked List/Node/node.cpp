#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next; // pointer of node type can be made because class is a user definde data type

    Node(int data) // creation of a constructor
    {
        this->data = data;
        this ->next = NULL;
    }
};

int main()
{
    Node *node1 = new Node(10); // creating a dynamic object

    cout << node1->data << endl; // -> is used because node1 is of pointer type
    cout << node1->next << endl;

    return 0;
}