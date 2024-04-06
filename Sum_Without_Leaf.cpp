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

node* input_tree()
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

int sum(node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return 0;
    }
    int left = sum(root->left);
    int right = sum(root->right);
    return left + right + root->valu;
}

int main()
{
    node *root = input_tree();
    cout << sum(root);
    return 0;
}
