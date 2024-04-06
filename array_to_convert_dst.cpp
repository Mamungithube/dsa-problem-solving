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
node* convert(int A[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    node *root = new node(A[mid]);
    node* leftroot=convert(A,n,l,mid-1);
    node* rightroot=convert(A,n,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
    return root;
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
int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i=0;i<=n;i++)
    {
        cin >> A[i];
    }
    node* root = convert(A,n,0,n-1);
    level_order(root);
    return 0;
}
