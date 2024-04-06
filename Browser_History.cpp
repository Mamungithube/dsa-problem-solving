#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> addresses;
    string address;
    while (cin >> address && address != "end")
    {
        addresses.push_back(address);
    }
    int Q;
    cin >> Q;
    auto cur = addresses.begin();
    for (int i = 0; i < Q; i++)
    {
        string val;
        cin >> val;

        if (val == "visit")
        {
            string query;
            cin >> query;

            auto it = find(addresses.begin(), addresses.end(), query);
            if (it != addresses.end())
            {
                cur = it;
                cout << *cur << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (val == "prev")
        {
            if (cur != addresses.begin())
            {
                cur--;
                cout << *cur << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (val == "next")
        {
            if (next(cur) != addresses.end())
            {
                cur++;
                cout << *cur << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        
    }
    return 0;
}
