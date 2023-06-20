#include <bits/stdc++.h>
using namespace std;
int D[502][502];
int S[502][502];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int Max;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            cin >> S[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <=n; j++)
            D[i][j] = max(D[i-1][j-1], D[i-1][j]) + S[i][j];
    Max = D[n][1];
    for(int j = 2; j <= n; j++)
    {
        if(Max < D[n][j])
            Max = D[n][j];
    }
    cout << Max << '\n';
    return 0;
}