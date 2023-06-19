#include <bits/stdc++.h>
using namespace std;
int D[1002][4];
int S[1002][4];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int input;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> input;
        S[i][1] = input;
        cin >> input;
        S[i][2] = input;
        cin >> input;
        S[i][3] = input;
    }
    D[1][1] = S[1][1]; D[1][2] = S[1][2]; D[1][3] = S[1][3];
    for (int i = 2; i <= t; i++)
    {
        D[i][1] = min(D[i-1][2], D[i-1][3]) + S[i][1];
        D[i][2] = min(D[i-1][1], D[i-1][3]) + S[i][2];
        D[i][3] = min(D[i-1][1], D[i-1][2]) + S[i][3];
    }
    cout << min({D[t][1],D[t][2],D[t][3]}) << '\n';
    return 0;
}