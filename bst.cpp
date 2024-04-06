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
bool search(node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->valu == x)
        return true;
    if (x < root->valu)
    {
        return search(root->left, x);
    }
    if (x > root->valu)
    {
        return search(root->right, x);
    }
}
void insert(node *&root, int x)
{
    if (root == NULL)
    {
        root = new node(x);
        return;
    }

    if (x < root->valu)
    {
        if (root->left == NULL)
        {
            root->left = new node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else if (x > root->valu)
    {
        if (root->right == NULL)
        {
            root->right = new node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }

}
void level_order(node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *f = q.front();
        q.pop();
        cout << f->valu << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    node *root = input_tree();
    insert(root, 13);
    level_order(root);
    return 0;
}