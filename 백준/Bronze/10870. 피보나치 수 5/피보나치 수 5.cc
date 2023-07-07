#include <bits/stdc++.h>
using namespace std;
unsigned long long D[10002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    D[0] = 0; D[1] = 1;
    for(int i = 2; i <= n; i++)
        D[i] = D[i-2] + D[i-1];
    cout << D[n] << '\n';
    return 0;
}