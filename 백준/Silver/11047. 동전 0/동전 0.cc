#include <bits/stdc++.h>
using namespace std;
int value[12];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    int cnt = 0;
    int tmp;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> value[i];
    for(int i = n-1; i >= 0; i--)    
    {
        if(k >= value[i])
        {
            tmp = k/value[i];
            k = k - (tmp*value[i]);
            cnt += tmp;
        }
    }
    cout << cnt << '\n';
    return 0;
}