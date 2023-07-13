#include <bits/stdc++.h>
using namespace std;
int D[1002][1002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= 1000; i++)
    {
        D[i][0] = 1; D[i][i] = 1;
        for(int j = 1; j < i; j++)
            D[i][j] = (D[i-1][j] + D[i-1][j-1]) % 10007;
    }
    cout << D[n][m] << '\n';
    return 0;
}