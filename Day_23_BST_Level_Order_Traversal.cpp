#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int _data)
    {
        data = _data;
        left = NULL;
        right = NULL;
    }
};

Node *inputTree(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    else
    {
        Node *cur;
        if (data <= root->data)
        {
            cur = inputTree(root->left, data);
            root->left = cur;
        }
        else
        {
            cur = inputTree(root->right, data);
            root->right = cur;
        }
        return root;
    }
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *frontNode = q.front();
        q.pop();

        // Print the data of the current node
        cout << frontNode->data << " ";

        // Enqueue left and right children if they exist
        if (frontNode->left)
        {
            q.push(frontNode->left);
        }
        if (frontNode->right)
        {
            q.push(frontNode->right);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        root = inputTree(root, data);
    }

    levelOrder(root);

    return 0;
}