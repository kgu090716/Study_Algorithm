#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int h, w, n;
    int res = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        res = 1;
        while (n > h)
        {
            n = n - h;
            res++;
        }
        cout << n;
        cout << setfill('0') << setw(2) << res << '\n';
    }
    return 0;
}