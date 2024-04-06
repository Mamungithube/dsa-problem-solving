#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        pq.push(A[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (c == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (c == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                {
                    cout << pq.top() << endl;
                }
            }
        }
    }
    return 0;
}
