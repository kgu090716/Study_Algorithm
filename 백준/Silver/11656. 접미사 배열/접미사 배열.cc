#include <bits/stdc++.h>
using namespace std;
string st;
vector<string> v;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string temp;
    cin >> st;
    reverse(st.begin(), st.end());
    int len = st.length();
    for (int i = 1; i <= len; i++)
    {
        temp = st.substr(0, i);
        reverse(temp.begin(), temp.end());
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(auto a : v)
        cout << a << '\n';
    return 0;
}