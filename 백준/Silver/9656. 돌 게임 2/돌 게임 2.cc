#include <bits/stdc++.h>
using namespace std;
int D[1002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    D[1] = 1; D[2] = 2; D[3] = 1;
    for(int i = 4; i <= n; i++)
        D[i] = min(D[i-1] + 1, D[i-3] + 1);
    if(D[n] % 2 == 0)
        cout << "SK" << '\n';
    else
        cout << "CY" << '\n';
    return 0;
}
