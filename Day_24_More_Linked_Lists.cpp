#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int _data)
    {
        data = _data;
        next = NULL;
    }
};

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            Node *duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    head = removeDuplicates(head);
    printLinkedList(head);
    
    return 0;
}