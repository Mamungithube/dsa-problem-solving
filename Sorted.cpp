#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;
    while (X--)
    {
        set<int> s;
        int Y;
        cin >> Y;
        while (Y--)
        {
            int Z;
            cin >> Z;
            s.insert(Z);
        }
    
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    }
    return 0;
}