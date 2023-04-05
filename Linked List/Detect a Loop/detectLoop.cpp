#include<iostream>
#include<map>

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

bool detectLoop(Node* head)
{
    if (head == NULL)
    {
        return false;
    }

    Node* temp = head;
    map <Node*, bool> visited;

    while(temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }

        visited[temp] = 1;
        temp = temp ->next;
    }

    return false;

}

bool floydDetectLoop(Node* head) // optimised approach
{
    if (head == NULL)
    {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL || slow != NULL)
    {
        fast = fast ->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;   
}

int main()
{

}