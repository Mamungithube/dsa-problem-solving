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
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void same(node *head1, node *head2)
{
    node *tmp1 = head1 ,*tmp2 = head2;;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->valu != tmp2->valu)
        {
            cout << "NO" << endl;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if(tmp1 == NULL&&tmp2 == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    node *head1 = NULL;
    node *tail1 = NULL;
    node *head2 = NULL;
    node *tail2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }
    same(head1,head2);
    return 0;
}