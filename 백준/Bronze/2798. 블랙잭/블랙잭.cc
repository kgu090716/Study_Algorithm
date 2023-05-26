#include <bits/stdc++.h>
using namespace std;
int arr[102];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int mxdiff = 300001;
    int diff = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int z = j+1; z < n; z++)
            {
                if (arr[i] + arr[j] + arr[z] > m)
                    continue;
                diff = m - (arr[i] + arr[j] + arr[z]);
                if (mxdiff > diff)
                    mxdiff = diff;
            }
        }
    }
    cout << m - mxdiff << '\n';
    return 0;
}