
#include <bits/stdc++.h>
using namespace std;

bool sortbyCond(const pair<string, int> &a, const pair<string, int> &b)
{
    if (a.first != b.first)
    {
        return (a.first < b.first);
    }
    else
    {
        return (a.second > b.second);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end(), sortbyCond);
    for (auto i : A)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
