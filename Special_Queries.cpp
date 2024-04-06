#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    queue<string> Q;
    while (T--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            if (!Q.empty())
            {
                cout << Q.front() << endl;
                Q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else
        {
            string name;
            cin >> name;
            Q.push(name);
        }
    }
    return 0;
}
