#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    while (n--)
    {       
        string sentence;
        getline(cin,sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> mp;
        string max;
        int maxCount = INT_MIN;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                max = word;
            }
        }
        cout << max << " " << maxCount << endl;
    }
    return 0;
}
