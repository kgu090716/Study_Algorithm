#include <bits/stdc++.h>
using namespace std;
long long D[92][2];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    D[1][0] = 1; D[1][1] = 1; D[2][0] = 2; D[2][1] = 1;
    for(int i = 3; i <= n; i++)
    {
        D[i][0] = 2*D[i-2][0] + D[i-2][1];
        D[i][1] = D[i-1][0];
    }
    cout << D[n][1];
    return 0;
}