#include <bits/stdc++.h>
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
void search(node *head, int X)
{
    node *tmp = head;
    int pos = 0;
    bool flag = false;
    while (tmp != NULL)
    {
        if (tmp->valu == X)
        {
            flag = true;
            break;
        }
        tmp = tmp->next;
        pos++;
    }
    if (flag == true)
    {
        cout << pos << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int val;
        node *head = NULL;
        node *tail = NULL;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_tail(head, tail, val);
        }
        int X;
        cin >> X;
        search(head, X);
    }
    return 0;
}