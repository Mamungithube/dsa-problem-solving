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
int cnt(node *root)
{
    if (root == NULL)
        return 0;
    int l = cnt(root->left);
    int r = cnt(root->right);
    return l + r + 1;
}
int maxhight(node *root)
{
    if (root == NULL)
        return 0;
    int l = maxhight(root->left);
    int r = maxhight(root->right);
    return max(l, r) + 1;
}
int main()
{
    node *node = input_tree();
    int h = maxhight(node);
    int total_node = cnt(node);
    int tmp = pow(2, h);
    if ((tmp - 1) == total_node)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}