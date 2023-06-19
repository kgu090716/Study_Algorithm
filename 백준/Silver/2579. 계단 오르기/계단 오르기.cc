#include <bits/stdc++.h>
using namespace std;
int D[302][3];
int S[302];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    int t, input;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> input;
        S[i] = input;
    }
    D[1][1] = S[1]; D[1][2] = 0;
    D[2][1] = S[2]; D[2][2] = S[1]+S[2];
    for(int i = 3; i <= t; i++)
    {
        D[i][1] = max(D[i-2][1], D[i-2][2]) + S[i];
        D[i][2] = D[i-1][1] + S[i]; 
    }
    cout << max(D[t][1], D[t][2]) << '\n';
    return 0;
}