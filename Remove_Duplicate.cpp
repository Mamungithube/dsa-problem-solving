#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

void insert(Node *&head, int valu)
{
    Node *newNode = new Node(valu);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void operation(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        Node *copy = tmp;

        while (copy->next != NULL)
        {
            if (copy->next->val == tmp->val)
            {
                Node *del = copy->next;
                copy->next = copy->next->next;
                delete del;
            }
            else
            {
                copy = copy->next;
            }
        }
        tmp = tmp->next;
    }
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert(head, val);
    }
    operation(head);
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    return 0;
}