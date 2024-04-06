#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll, mark;
    student(string name, int roll, int mark)
    {
        this->name = name;
        this->mark = mark;
        this->roll = roll;
    }
};
class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.mark < b.mark)
            return true;
        else if (a.mark > b.mark)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<student, vector<student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;
        student obj(name, roll, mark);
        pq.push(obj);
    }
    int x;
    cin >> x;
    while (x--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, mark;
            cin >> name >> roll >> mark;
            student obj(name, roll, mark);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        if (c == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        if (c == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
                }
            }
        }
    }

    return 0;
}
