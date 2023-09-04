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

int getHeight(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
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

    int height = getHeight(root);
    cout << height << endl;

    return 0;
}
