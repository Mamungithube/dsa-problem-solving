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
node *input_tree()
{
    int v;
    cin >> v;
    node *root;
    if (v == -1)
        root = NULL;
    else
        root = new node(v);
    queue<node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            f->left = new node(l);
            q.push(f->left);
        }
        if (r != -1)
        {
            f->right = new node(r);
            q.push(f->right);
        }
    }
    return root;
}
void print_left(node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
    {
        print_left(root->left);
        cout << root->valu << " ";
    }
    else
    {
        print_left(root->right);
        cout << root->valu << " ";
    }
}
void print_right(node *root)
{
    if (root == NULL)
        return;
    if (root->right != NULL)
    {
        cout << root->valu << " ";
        print_right(root->right);
    }
    else
    {
        cout << root->valu << " ";
        print_right(root->left);
    }
}
int main()
{
    node *node = input_tree();
    if (node->left != NULL)
    {
        print_left(node->left);
    }
    cout << node->valu << " ";
    if (node->right != NULL)
    {
        print_right(node->right);
    }
    return 0;
}