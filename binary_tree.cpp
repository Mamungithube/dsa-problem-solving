#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int valu;
    node *left;
    node *right;
    node(int valu)
    {
        this->valu = valu;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout << root->valu << " ";
    inorder(root->right);
    
}
int main()
{
    node *root = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *e = new node(60);
    node *f = new node(70);
    node *g = new node(80);
    node *h = new node(90);
    node *i = new node(100);
    // conection

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    h->left = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;
    inorder(root);
    return 0;
}