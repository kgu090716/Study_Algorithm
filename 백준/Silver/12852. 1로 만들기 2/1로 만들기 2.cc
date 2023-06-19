#include <bits/stdc++.h>
using namespace std;
int D[1000002];
int a[1000002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    D[1] = 0;
    a[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        D[i] = D[i - 1] + 1;
        a[i] = i - 1;
        if (i % 2 == 0 && D[i / 2] + 1 < D[i])
        {
            D[i] = D[i / 2] + 1;
            a[i] = i / 2;
        }
        if (i % 3 == 0 && D[i / 3] + 1 < D[i])
        {
            D[i] = D[i / 3] + 1;
            a[i] = i / 3;
        }
    }
    cout << D[n] << '\n';
    while (1)
    {
        cout << n << ' ';
        if(n == 1)
            break;
        n = a[n];
    }
    return 0;
}