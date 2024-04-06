#include <bits/stdc++.h>
using namespace std;
void isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && ((st.top() == '0' && c == '1')))
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    if(st.empty())
    {
        cout << "YES" <<endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        isValid(s);
    }

    return 0;
}

