#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
int cnt = 1;
long long mxval = -4611686018427388001;
int mxcnt = 0;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int len;
    long long input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    len = v.size();
    if (len == 1)
        mxval = v[0];
    for (int i = 0; i < len - 1; i++)
    {
        if (v[i] == v[i + 1])
            cnt++;
        else
        {
            if (mxcnt < cnt)
            {
                mxcnt = cnt;
                mxval = v[i];
            }
            cnt = 1;
        }
    }
    if(mxcnt < cnt)
        mxval = v[len-1];
    cout << mxval << '\n';
    return 0;
}