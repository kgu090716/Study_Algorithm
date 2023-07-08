#include <bits/stdc++.h>
using namespace std;
int a[102];
int D[10002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    D[0] = 1;
    for(int i = 0; i < n; i++)
        for(int j = a[i]; j<=k;j++)
            D[j] += D[j-a[i]];
    cout << D[k];
    return 0;
}