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
void levelnode(node *root, int x)
{
    queue<pair<node *, int>> q;
    q.push(make_pair(root, 0));
    bool tmp=false;
    while (!q.empty())
    {
        pair<node *, int> pr = q.front();
        node *node = pr.first;
        int level = pr.second;
        q.pop();
        if (level == x)
        {
            cout << node->valu << " ";
            tmp = true;
        }
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }       
    }
    if(tmp == false)
    {
        cout << "Invalid";
    }
}
int main()
{
    node* newnode=input_tree();
    int x;
    cin>>x;
    levelnode(newnode,x);
    return 0;
}