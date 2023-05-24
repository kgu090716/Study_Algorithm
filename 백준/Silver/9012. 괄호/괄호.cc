#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string st;
    bool yn = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        yn = 0;
        stack <char> s;
        cin >> st;
        for(auto c : st)
        {
            if(c == ')')
            {
                if(s.empty())
                {
                    yn = 1;
                    break;
                }
                else
                {
                    s.pop();
                }
            }
            else
                s.push(c);
        }
        if(!s.empty() || yn)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}