#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left=NULL;
        this->right=NULL;
    }

};

Node* insertIntoBST(Node* root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d < root->data)
    {
        root->left = insertIntoBST(root->left, d);
    }

    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }

    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while(data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int getMin(Node* root)
{
    Node* temp = root;

    while(temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp->data;
}

int getMax(Node* root)
{
    Node* temp = root;

    while(temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp->data;
}

Node* deleteFromBST(Node* root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == x)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return root;
        }

        // 1 child
        if (root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = getMin(root->right);
            root->data = mini;

            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }

    else if (x < root->data)
    {
        root->left = deleteFromBST(root->left, x);
        return root;
    }

    else{
        root->right = deleteFromBST(root->right, x);
        return root;
    }
}

void levelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << front->data << " ";

            if (front->left)
            {
                q.push(front->left);
            }

            if (front->right)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node* root = NULL;

    cout << "Enter the data for BST ";
    takeInput(root);

    //level order traversal of tree 
    levelOrder(root);
    
    cout << "Max and Min values are ";
    cout << getMax(root) << " and " << getMin(root) << endl;

    return 0;
}