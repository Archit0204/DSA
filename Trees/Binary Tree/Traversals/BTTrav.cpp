#include<iostream>
#include<queue>

using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void buildFromLevelOrder(node* &root)
{
    queue<node*> q;

    cout << "Enter data ";
    int data;
    cin >> data;

    root = new node(data);

    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

}

void levelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *front = q.front();
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

void inOrder(node* root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);

    cout << root->data << " ";

    inOrder(root->right);
}

void preOrder(node* root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    preOrder(root->left);

    preOrder(root->right);
}

void postOrder(node* root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);

    postOrder(root->right);
}

int main()
{
    node* root;

    buildFromLevelOrder(root);

    preOrder(root);

    return 0;
}