#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> v;

bool cmp(pair<int,int> a, const pair<int,int> b)
{
    if(a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a, b;
    int cnt = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), cmp);
    int prev = v[0].second;
    for(int i = 1; i < n; i++)
    {
        if(v[i].first >= prev)
        {
            cnt++;
            prev = v[i].second;
        }
    }
    cout << cnt << '\n';
    return 0;
}