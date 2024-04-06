#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    int n;
    while (cin >> n && n != -1)
    {
        mylist.push_back(n);
    }
    mylist.sort();
    mylist.unique();
    for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}
