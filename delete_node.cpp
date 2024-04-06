#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void link_list_print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)

    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void delete_node(node * head ,int pos)
{
    node *tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    node*delete_node = tmp->next;
    tmp->next=tmp->next->next;
    delete delete_node;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *s = new node(30);
    node *d = new node(40);
    node *f = new node(50);
    node *g = new node(60);
    head->next = a;
    a->next = s;
    s->next = d;
    d->next = f;
    f->next = g;
    link_list_print(head);
    int pos;
    cin >> pos;
    delete_node(head,pos);
    link_list_print(head);
    return 0;
}