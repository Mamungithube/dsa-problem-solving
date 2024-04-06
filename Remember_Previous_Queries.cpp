#include <bits/stdc++.h>
using namespace std;

void L_print(list<int> mylist)
{
    cout << "L -> ";
    for (auto val : mylist)
    {
        cout << val << " ";
    } 
    cout << endl;
}

void R_print(list<int> mylist)
{
    cout << "R -> ";
    mylist.reverse();
    for (auto val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> mylist;
    int Q;
    cin >> Q;

    while(Q--)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            mylist.push_front(val);
        }
        else if (pos == 1)
        {
            mylist.push_back(val);
        }
        else if (pos == 2)
        {
            if (val < mylist.size())
            {
                mylist.erase(next(mylist.begin(),val));
            }
        }

        L_print(mylist);
        R_print(mylist);
    }
    return 0;
}