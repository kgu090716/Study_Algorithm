#include <bits/stdc++.h>
using namespace std;
vector <string> v;
vector <string> v2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int len;
    int cnt=0;
    string input;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    len = v.size();
    for(int i = 0; i < len-1; i++)
    {
        if(v[i] == v[i+1])
        {
            v2.push_back(v[i]);
            cnt++;
        }
    }
    cout << cnt << '\n';
    for(auto a : v2)
        cout << a << '\n';
    return 0;
}