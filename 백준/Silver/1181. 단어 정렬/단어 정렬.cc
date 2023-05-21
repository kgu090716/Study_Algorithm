#include <bits/stdc++.h>
using namespace std;
vector <string> v;
bool cmp(string st1, string st2)
{
    int len1 = st1.length();
    int len2 = st2.length();
    if(len1 != len2)
        return len1 < len2;
    else
        return st1 < st2;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string input;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());
    for(auto a : v)
        cout << a << '\n';
    return 0;
}