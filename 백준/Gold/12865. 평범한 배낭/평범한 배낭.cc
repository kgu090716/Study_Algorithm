#include <bits/stdc++.h>
using namespace std;
int D[102][100002];
int W[102];
int V[102];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> W[i] >> V[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            if(W[i] > j)
                D[i][j] = D[i-1][j];
            else
                D[i][j] = max(V[i] + D[i-1][j-W[i]], D[i-1][j]);
        }
    }
    cout << D[n][k] << '\n';
    return 0;
}