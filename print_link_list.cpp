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
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);

    // head->next = a;
    // a->next = b;
    
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->valu << endl;
        // tmp = tmp->next ;
    }
    return 0;
}