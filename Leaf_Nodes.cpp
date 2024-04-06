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
void leafnode(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    vector<int> v;
    q.push(root);
    while (!q.empty())
    {
        node *tmp = q.front();
        q.pop();
        if (tmp->left == NULL && tmp->right == NULL)
            v.push_back(tmp->valu);
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    sort(v.begin(),v.end(),greater<int>());
    for (int i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    node *newnode = input_tree();
    leafnode(newnode);
    return 0;
}