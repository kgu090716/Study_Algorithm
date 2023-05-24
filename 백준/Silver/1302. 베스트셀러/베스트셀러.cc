#include <bits/stdc++.h>
using namespace std;
vector<string> v;
vector<string> uv;

// bool cmp(string n1, string n2)
// {
//     if(count(v.begin(), v.end(), n1) != count(v.begin(), v.end(), n1))
//         return count(v.begin(), v.end(), n1) > count(v.begin(), v.end(), n1);
//     else
//         return n1 < n2;

// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    int n;
    int mxcnt = 0;
    string mxstring;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for(auto a : v)
        uv.push_back(a);
    unique(uv.begin(),uv.end());
    for(auto a : uv)
    {
        int cnt = count(v.begin(), v.end(), a);
        if(mxcnt < cnt)
        {
            mxcnt = cnt;
            mxstring = a;
        }
    }
    cout << mxstring;
    return 0;
}