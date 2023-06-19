#include <bits/stdc++.h>
using namespace std;
int D[1002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    D[1] = 1;
    D[2] = 3;
    for (int i = 3; i <= n; i++)
        D[i] = (D[i - 2] + D[i - 2] + D[i - 1])%10007;
    cout << D[n] << '\n';
    return 0;
}