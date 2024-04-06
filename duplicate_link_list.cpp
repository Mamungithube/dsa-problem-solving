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

void insert(node* &head, int val)
{
    node* newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

bool hasDuplicate(node* head)
{
    unordered_set<int> seenValues;

    while (head != NULL)
    {
        if (seenValues.find(head->valu) != seenValues.end())
        {
            // Duplicate value found
            return true;
        }
        else
        {
            seenValues.insert(head->valu);
        }

        head = head->next;
    }

    // No duplicate values found
    return false;
}

int main()
{
    int val;
    node* head = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert(head, val);
    }

    // Check for duplicates and print the result
    cout << (hasDuplicate(head) ? "YES" : "NO") << endl;

    return 0;
}
