#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin >> x;
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent = (cur_idx - 1) / 2;
        if (v[parent] < v[cur_idx])
        {
            swap(v[parent], v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx = parent;
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}
