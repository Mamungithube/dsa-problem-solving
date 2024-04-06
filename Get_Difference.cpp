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
void diffarence(node * head)
{
    int min = INT_MAX;
    int max = INT_MIN;
    node * tmp = head;
    while(tmp !=NULL)
    {
        if(tmp->valu <min)
        {
            min = tmp->valu;
        }
        if(tmp->valu >max)
        {
            max = tmp->valu;
        }
        tmp = tmp->next;
    }
    int ans = max-min;
    cout << ans ;
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
    diffarence(head);
    // node *tmp = head;
    // while (tmp != NULL)
    // {
    //     cout << tmp->valu << " ";
    //     tmp = tmp->next;
    // }
    return 0;
}