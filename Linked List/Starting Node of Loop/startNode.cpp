#include<iostream>

using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* FloydDetect(Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast -> next;

        if (fast != NULL)
        {
            fast = fast -> next;
        }

        slow = slow -> next;

        if (fast == slow)
        {
            return slow;
        }
    }   
}

Node* startingNode(Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node* intersection = FloydDetect(head);
    Node* slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}