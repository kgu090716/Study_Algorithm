#include <bits/stdc++.h>
using namespace std;
int a[22];
int D[10002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int n, m;
    D[0] = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        cin >> m;
        for(int i = 1; i <= m; i++)
            D[i] = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = a[i]; j <= m; j++)
            {
                D[j] += D[j-a[i]];
            }
        }
        cout << D[m] << '\n';
    }
    return 0;
}