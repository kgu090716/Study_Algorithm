#include <bits/stdc++.h>
using namespace std;
int D[32][32];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int n, m;
    cin >> t;
    for(int i = 0; i <= 30; i++)
    {
        for(int j = 0; j <= 30; j++)
        {
            if(i==j || j == 0)
                D[i][j] = 1;
            else
                D[i][j] = D[i-1][j-1] + D[i-1][j];
        }
    }
    while(t--)
    {
        cin >> n >> m;
        cout << D[m][n] << '\n';
    }
    return 0;
}