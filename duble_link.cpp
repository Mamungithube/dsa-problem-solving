#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int valu;
    node *next;
    node *prev;
    node(int valu)
    {
        this->valu = valu;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_pos(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    for (int i = 0; i < pos-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->prev=tmp;
    newnode->next->prev=newnode;
}
void insert_head(node *&head,int val)
{
    node *newnode = new node(val);
    newnode->next=head;
    head->prev=newnode;
    head = head->prev;
}
void insert_tail(node*&head,node*&tail,int val)
{
    node *newnode = new node(val);
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
void print_normal(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->valu << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->valu << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    insert_head(head,100);
    insert_tail(head,tail,60);
    print_normal(head);
    print_reverse(tail);
    return 0;
}