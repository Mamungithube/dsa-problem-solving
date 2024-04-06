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
int size(node * head)
{
    node * tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void normal(node* head)
{
    node * tmp=head;
    while(tmp!=NULL)
    {
        cout << tmp->valu << " ";
        tmp=tmp->next;
    }
    cout << endl;
}
void revarce(node* tail)
{
    node* tmp =tail;
    while(tmp !=NULL)
    {
        cout << tmp->valu << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_head(node*&head,int valu)
{
    node * newnode=new node(valu);
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    
}
void insert(node * head,int pos,int valu)
{
    node * newnode = new node(valu);
    node * tmp = head;
    for (int i=1;i<=pos -1;i++)
    {
        tmp=tmp->next;      
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->prev=tmp;
    newnode->next->prev=newnode;
    
}
int main(){
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
   
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    node* tail = b;
    // int pos , valu;
    // cin >> pos >> valu;
    // if (pos >size(head))
    // {
    //     cout << "invalit pos" ;
    // }
    // else if(pos == 0)
    // {
    //     insert_head(head,valu);
    // }
    // else 
    // {
    //     insert(head,pos,valu);
    // }
    insert(head,2,100);

    normal(head);
    revarce(tail);
    
    return 0;
}