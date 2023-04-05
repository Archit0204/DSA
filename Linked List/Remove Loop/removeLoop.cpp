#include<iostream>

using namespace std;

class Node
{
    public:

    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

Node* floydDetectLoop(Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
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

    Node* slow = head;
    Node* intersect = floydDetectLoop(head);

    while (slow != intersect)
    {
        slow = slow->next;
        intersect = intersect->next;
    }

    return slow;
}

void removeLoop(Node* head)
{
    if (head == NULL)
    {
        return;
    }

    Node* start = startingNode(head);
    Node* temp = start;

    while(temp->next != start)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}