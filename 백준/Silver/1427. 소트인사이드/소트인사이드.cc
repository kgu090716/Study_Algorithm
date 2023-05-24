#include <bits/stdc++.h>
using namespace std;
bool cmp(char c1, char c2)
{
    return c1 > c2;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string st;
    cin >> st;
    sort(st.begin(), st.end(), cmp);
    cout << st;
    return 0;
}