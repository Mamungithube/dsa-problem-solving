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
void insert_head(node*&head,int val)
{
    node *newnode = new node(val);
    newnode->next=head;
    head = newnode;
}
void insert_position(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    tail->next = newnode;
    tail = newnode;
}
void delete_position(node*head ,int pos)
{
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void delete_head(node *&head)
{
    node*delete_node=head;
    head = head->next;
    delete delete_node;
}
void delete_tail(node *&tail)
{
    node*delete_node=tail;
    tail = tail->next;
    delete delete_node;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *tail = c;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    int pos;
    cin >> pos ;
    delete_position(head,pos);
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->valu << endl;
        tmp = tmp->next;
    }

    return 0;
}
