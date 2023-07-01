#include <bits/stdc++.h>
using namespace std;
int D[5002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    D[1] = -1; D[2] = -1; D[3] = 1; D[4] = -1; D[5] = 1; D[6] = 2; D[7] = -1;
    for(int i = 8; i <= n; i++)
    {
        if(i % 5 == 0)
            D[i] = i/5;
        else
            D[i] = D[i-3] + 1;
    }
    cout << D[n] << '\n';
    return 0;
}