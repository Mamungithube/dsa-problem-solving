#include <iostream>
using namespace std;

class node
{
public:
    int valu;
    node *next;
    node(int valu)
    {
        this->valu = valu;
        this->next = NULL;
    }
};
int size(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_head(node *&head, int valu)
{
    node *newnode = new node(valu);
    newnode->next = head;
    head = newnode;
}

void insert_tail(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void del(node *&head, int pos)
{
    if (pos >= size(head) || pos < 0)
    {
        return;
    }
    if (pos == 0)
    {
        node *tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node *Del = tmp->next;
    tmp->next = tmp->next->next;
    delete Del;
}
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->valu << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    int T;
    cin >> T;

    while (T--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_head(head, V);
        }
        else if (X == 1)
        {
            insert_tail(head, V);
        }
        else if (X == 2)
        {
            del(head, V);
        }

        print(head);
    }

    return 0;
}